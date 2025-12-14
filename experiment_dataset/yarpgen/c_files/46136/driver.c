#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3983807938U;
long long int var_14 = -6172407718495877480LL;
unsigned long long int var_15 = 5716591753993325693ULL;
unsigned short var_16 = (unsigned short)56053;
unsigned short var_17 = (unsigned short)42748;
int zero = 0;
unsigned int var_19 = 1880348579U;
int var_20 = -1417137016;
void init() {
}

void checksum() {
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
