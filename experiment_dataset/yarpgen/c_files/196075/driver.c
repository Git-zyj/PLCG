#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
int var_2 = 1960583543;
short var_4 = (short)-20233;
short var_5 = (short)22575;
short var_6 = (short)25340;
short var_9 = (short)19504;
int zero = 0;
unsigned int var_10 = 2183633355U;
unsigned long long int var_11 = 8520649779110111924ULL;
unsigned int var_12 = 928491701U;
unsigned int var_13 = 1285404083U;
unsigned int var_14 = 2778862295U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
