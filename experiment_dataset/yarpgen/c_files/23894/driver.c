#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1419391313U;
short var_4 = (short)12522;
int var_7 = -901417250;
unsigned short var_10 = (unsigned short)20689;
int zero = 0;
unsigned short var_14 = (unsigned short)63444;
unsigned long long int var_15 = 3703703186234986358ULL;
void init() {
}

void checksum() {
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
