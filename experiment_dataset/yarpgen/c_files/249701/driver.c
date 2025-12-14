#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)2017;
long long int var_9 = -7240716975175856714LL;
unsigned char var_12 = (unsigned char)129;
int zero = 0;
long long int var_15 = -4126601151621082105LL;
unsigned int var_16 = 4103339714U;
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
