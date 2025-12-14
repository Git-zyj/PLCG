#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32539;
unsigned short var_2 = (unsigned short)65535;
unsigned long long int var_5 = 6096172730402204581ULL;
unsigned short var_6 = (unsigned short)49241;
signed char var_7 = (signed char)-36;
unsigned short var_8 = (unsigned short)11586;
unsigned int var_9 = 1205917104U;
int zero = 0;
unsigned short var_11 = (unsigned short)44806;
signed char var_12 = (signed char)77;
signed char var_13 = (signed char)-47;
unsigned int var_14 = 1405362551U;
short var_15 = (short)1623;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
