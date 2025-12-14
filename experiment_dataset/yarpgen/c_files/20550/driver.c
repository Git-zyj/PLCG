#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15750775201212503198ULL;
unsigned int var_4 = 601627873U;
unsigned long long int var_6 = 2013101809970924763ULL;
unsigned int var_7 = 116674335U;
int zero = 0;
short var_12 = (short)-18453;
unsigned long long int var_13 = 7820832869641474855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
