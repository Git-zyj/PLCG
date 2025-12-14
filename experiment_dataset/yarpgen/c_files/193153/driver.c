#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27241;
unsigned long long int var_2 = 9797365329900575086ULL;
int var_10 = -1090775923;
unsigned long long int var_15 = 10257009267685306662ULL;
int var_17 = 560755857;
int zero = 0;
unsigned int var_18 = 617407186U;
int var_19 = -2020227043;
unsigned long long int var_20 = 8003768267205056551ULL;
unsigned char var_21 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
