#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4132099281234113675ULL;
signed char var_6 = (signed char)73;
int var_11 = 1359061804;
unsigned short var_13 = (unsigned short)56482;
int zero = 0;
int var_15 = -1079169472;
unsigned long long int var_16 = 9329221465105223359ULL;
void init() {
}

void checksum() {
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
