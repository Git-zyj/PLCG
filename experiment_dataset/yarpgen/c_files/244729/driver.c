#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24862;
unsigned short var_6 = (unsigned short)18704;
unsigned long long int var_10 = 6556445814979023704ULL;
unsigned long long int var_11 = 7714096341920916531ULL;
short var_16 = (short)25027;
int zero = 0;
short var_17 = (short)1659;
unsigned long long int var_18 = 14899993223260858015ULL;
unsigned long long int var_19 = 5990799341980625743ULL;
unsigned int var_20 = 2182355003U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
