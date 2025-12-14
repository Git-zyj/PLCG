#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
unsigned short var_3 = (unsigned short)615;
unsigned long long int var_4 = 12691157158439435282ULL;
int var_5 = 655184076;
unsigned long long int var_6 = 8298164438483566458ULL;
int var_7 = -737630868;
short var_9 = (short)-31501;
short var_10 = (short)25323;
int zero = 0;
long long int var_11 = -7857376065446068555LL;
long long int var_12 = 5215882696354339878LL;
long long int var_13 = -6077890160636187333LL;
unsigned char var_14 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
