#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1280113702;
short var_1 = (short)15430;
unsigned long long int var_2 = 12538433533249021717ULL;
short var_3 = (short)6392;
unsigned char var_4 = (unsigned char)173;
unsigned long long int var_5 = 12218142268230541243ULL;
unsigned long long int var_6 = 680186056937805311ULL;
long long int var_7 = 5220546029336355704LL;
unsigned long long int var_9 = 12040826179053178922ULL;
short var_10 = (short)-18186;
int var_11 = -334219818;
int zero = 0;
int var_13 = -20697699;
int var_14 = 1849805774;
int var_15 = -2107386489;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
