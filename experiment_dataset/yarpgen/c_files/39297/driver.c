#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47710;
unsigned short var_1 = (unsigned short)42451;
int var_2 = -835229133;
unsigned char var_3 = (unsigned char)197;
int var_5 = -64186689;
int var_6 = 356541093;
short var_7 = (short)-4055;
short var_8 = (short)-9790;
short var_9 = (short)12055;
unsigned int var_10 = 1484789589U;
unsigned short var_11 = (unsigned short)33445;
int zero = 0;
int var_12 = -530220096;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 264004281U;
void init() {
}

void checksum() {
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
