#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

bool isMember;

int height;
float face;
int frame;
int choice;
string player;
string birthPlace;

string members[] = {
    "ObidientMujahid", "Ztreoa", "Rei",
    "The Galaxy is Big", "Xec", "Namewastaken", "Awtysm"
};
int memberCount = 7;

string getRandomBirthPlace() {
    string places[] = { "Mumbai", "Agartha", "Atlantis" };
    int size = sizeof(places) / sizeof(places[0]);
    return places[rand() % size];
}

string getFaceText(float f) {
    if (f == 1) return "Subhuman";
    if (f == 2) return "LTN";
    if (f == 3 || f == 4) return "MTN";
    if (f == 5) return "HTN";
    if (f >= 6 && f <= 8) return "Chadlite";
    if (f >= 9 && f <= 10) return "Chad";
    return "Unknown";
}

string getFrameText(int fr) {
    if (fr == 1) return "Manlet";
    if (fr == 2) return "Gymcel";
    if (fr == 3) return "Gymbro";
    if (fr == 4 || fr == 5) return "True Gym Member";
    return "Unknown";
}

void printMenu() {
    cout << "   COPEHEAVEN " << player << endl;
    cout << "------------------------\n";
    cout << "1 Show stats\n";
    cout << "2 Hardmaxx\n";
    cout << "3 Softmaxx\n";
    cout << "4 Mog battle\n";
    cout << "5 Give up (ROPE)\n";
    cout << "------------------------\n";
    cout << "your choice - ";
    cin >> choice;
}

void showStats() {
    cout << "Member: " << player << endl;
    cout << "Birthplace: " << birthPlace << endl;
    cout << "Height: " << height << endl;
    cout << "Frame: " << getFrameText(frame) << endl;
    cout << "Face: " << getFaceText(face) << endl;
}

int main() {
    srand(time(NULL));

    cout << "ObidientMujahid\n";
    cout << "Ztreoa\n";
    cout << "Rei\n";
    cout << "The Galaxy is Big\n";
    cout << "Xec\n";
    cout << "Namewastaken\n";
    cout << "Awtysm\n";
    cout << "------------------\n";

    cout << "player - ";
    cin >> player;

    if (player == "ObidientMujahid" || player == "Ztreoa" || player == "Rei" ||
        player == "The Galaxy is Big" || player == "Xec" ||
        player == "Namewastaken" || player == "Awtysm") {
        isMember = true;
    }
    else {
        cout << "NOT A MEMBER - ACCESS DENIED.\n";
        Sleep(2000);
        return 0;
    }

    height = rand() % 51 + 150;
    frame = rand() % 5 + 1;
    face = rand() % 10 + 1;
    birthPlace = getRandomBirthPlace();

    while (true) {
        system("cls");
        printMenu();

        if (choice == 1) {
            system("cls");
            showStats();
            system("pause");
        }

        else if (choice == 3) {
            int softma;
            system("cls");
            cout << "Welcome " << player << endl;
            cout << "[1] Tan (+0.5 face)\n";
            cout << "[2] Haircut (+0.5 face)\n";
            cout << "[3] Acne routine (+0.5 face)\n";
            cout << "[4] Return\n";
            cout << "-------------------------------------------\n";
            cout << "your choice - ";
            cin >> softma;

            if (softma == 1 || softma == 2 || softma == 3) {
                face += 0.5;
                if (face > 10) face = 10;
                cout << "Face improved to: " << getFaceText(face) << endl;
                Sleep(1500);
            }
            else if (softma == 4) continue;
        }

        else if (choice == 2) {
            int hardma;
            system("cls");
            cout << "Welcome " << player << ", you are now in Turkey\n";
            cout << "[1] Limb lengthening\n";
            cout << "[2] Lefort 3\n";
            cout << "[3] Take DHT and improve frame\n";
            cout << "[4] Return\n";
            cout << "-------------------------------------------\n";
            cout << "your choice - ";
            cin >> hardma;

            if (hardma == 1) {
                height += 10;
                cout << "Your height is now: " << height << endl;
                Sleep(1500);
            }
            else if (hardma == 2) {
                face += 3;
                if (face > 10) face = 10;
                cout << "Your face is now: " << getFaceText(face) << endl;
                Sleep(1500);
            }
            else if (hardma == 3) {
                frame += 1;
                if (frame > 5) frame = 5;
                cout << "Frame improved to: " << getFrameText(frame) << endl;
                Sleep(1500);
            }
            else if (hardma == 4) continue;
        }

        else if (choice == 4) {
            system("cls");

            string enemy;
            do enemy = members[rand() % memberCount];
            while (enemy == player);

            int eHeight = rand() % 51 + 150;
            float eFace = rand() % 10 + 1;
            int eFrame = rand() % 5 + 1;

            bool faceDone = false;
            bool frameDone = false;
            bool heightDone = false;

            cout << "A wild mog battle begins!\n";
            cout << "Your opponent is: " << enemy << "\n\n";
            Sleep(1000);

            while (true) {
                cout << "\n--- MOG OPTIONS ---\n";
                if (!faceDone) cout << "1) Facemog\n";
                if (!frameDone) cout << "2) Framemog\n";
                if (!heightDone) cout << "3) Heightmog\n";
                cout << "--------------------\n";
                cout << "choice - ";

                int mogChoice;
                cin >> mogChoice;

                if (mogChoice == 1 && !faceDone) {
                    system("cls");
                    cout << "Your face: " << getFaceText(face) << endl;
                    cout << enemy << "'s face: " << getFaceText(eFace) << endl;
                    Sleep(800);

                    if (face > eFace) {
                        cout << "MOGGED!\n";
                        eFace -= 0.5;
                    }
                    else {
                        cout << "YOU GOT MOGGED!\n";
                        face -= 0.5;
                    }

                    if (eFace < 1) eFace = 1;
                    if (face < 1) face = 1;

                    faceDone = true;
                    Sleep(1500);
                }

                else if (mogChoice == 2 && !frameDone) {
                    system("cls");
                    cout << "both of you are at the beach\n";
                    cout << "Your frame: " << getFrameText(frame) << endl;
                    cout << enemy << "'s frame: " << getFrameText(eFrame) << endl;

                    if (frame > eFrame) {
                        cout << "MOGGED!\n";
                        eFrame -= 1;
                    }
                    else {
                        cout << "YOU GOT MOGGED!\n";
                        frame -= 1;
                    }

                    if (eFrame < 1) eFrame = 1;
                    if (frame < 1) frame = 1;

                    frameDone = true;
                    Sleep(1500);
                }

                else if (mogChoice == 3 && !heightDone) {
                    system("cls");
                    cout << "Your height: " << height << endl;
                    cout << enemy << "'s height: " << eHeight << endl;

                    if (height > eHeight) {
                        cout << "BRUTAL YOU TOOK HIS GF!\n";
                        eHeight -= 1;
                    }
                    else {
                        cout << "HE TOOK YOUR GIRL!!\n";
                        height -= 1;
                    }

                    if (eHeight < 140) eHeight = 140;
                    if (height < 140) height = 140;

                    heightDone = true;
                    Sleep(2500);

                    cout << "\nMog battle finished. Returning to menu...\n";
                    Sleep(1500);
                    break;
                }
            }

            continue;
        }

        else if (choice == 5) {
            cout << "Its over.\n";
            Sleep(2000);
            exit(0);
        }
    }
    return 0;
}
