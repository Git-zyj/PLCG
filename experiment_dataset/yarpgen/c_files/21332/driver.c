#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1656146184;
long long int var_6 = -727353301181016574LL;
unsigned char var_10 = (unsigned char)33;
unsigned int var_11 = 3848267498U;
unsigned char var_13 = (unsigned char)190;
short var_15 = (short)12596;
signed char var_16 = (signed char)46;
int zero = 0;
unsigned short var_18 = (unsigned short)37409;
unsigned int var_19 = 1478090233U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
