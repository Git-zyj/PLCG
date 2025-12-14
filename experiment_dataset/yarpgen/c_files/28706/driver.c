#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9879;
unsigned char var_2 = (unsigned char)56;
unsigned long long int var_5 = 5211211091924320018ULL;
int zero = 0;
unsigned long long int var_14 = 13829336311208954219ULL;
int var_15 = -1687126396;
int var_16 = -1367550319;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
