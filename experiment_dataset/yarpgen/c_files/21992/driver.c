#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22120;
unsigned int var_3 = 2064863978U;
long long int var_4 = 4310636721146563146LL;
short var_6 = (short)-8636;
unsigned short var_9 = (unsigned short)44141;
unsigned short var_10 = (unsigned short)16782;
unsigned int var_13 = 3937678507U;
short var_14 = (short)24804;
unsigned int var_16 = 3890236563U;
int zero = 0;
unsigned short var_17 = (unsigned short)36201;
unsigned long long int var_18 = 12140420610162481255ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
