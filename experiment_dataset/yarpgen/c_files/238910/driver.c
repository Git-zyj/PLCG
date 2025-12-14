#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51652;
long long int var_4 = -1108610726684921563LL;
short var_12 = (short)-12278;
int var_13 = -1775652894;
int zero = 0;
int var_14 = 171540793;
signed char var_15 = (signed char)-33;
signed char var_16 = (signed char)-98;
unsigned short var_17 = (unsigned short)55600;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
