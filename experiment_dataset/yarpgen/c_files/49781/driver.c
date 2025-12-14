#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54330;
unsigned int var_8 = 2013104988U;
short var_11 = (short)13369;
int zero = 0;
unsigned long long int var_18 = 846608119059024551ULL;
short var_19 = (short)-310;
short var_20 = (short)-2044;
void init() {
}

void checksum() {
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
