#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned long long int var_1 = 13286197308037930900ULL;
short var_5 = (short)-17840;
unsigned long long int var_6 = 17186528545529139311ULL;
unsigned short var_7 = (unsigned short)21223;
int zero = 0;
short var_14 = (short)-7167;
unsigned int var_15 = 2308345700U;
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
