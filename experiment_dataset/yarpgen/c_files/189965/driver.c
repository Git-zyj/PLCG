#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -166345278;
int var_7 = 2119951162;
unsigned long long int var_11 = 6033374600375199915ULL;
unsigned int var_12 = 2455876839U;
int zero = 0;
unsigned short var_13 = (unsigned short)33260;
unsigned long long int var_14 = 16155227688133837683ULL;
long long int var_15 = 726325594434421251LL;
long long int var_16 = -7315557305874886950LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
