#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38554;
short var_1 = (short)-6051;
unsigned short var_5 = (unsigned short)7966;
short var_7 = (short)-31430;
unsigned short var_11 = (unsigned short)18657;
unsigned char var_12 = (unsigned char)39;
unsigned long long int var_13 = 1987554495646026070ULL;
short var_14 = (short)16396;
int var_16 = 708089797;
int var_17 = -545174473;
unsigned long long int var_18 = 2622906970273624344ULL;
int zero = 0;
short var_19 = (short)11988;
int var_20 = -952374249;
int var_21 = 267542167;
short var_22 = (short)-17077;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
