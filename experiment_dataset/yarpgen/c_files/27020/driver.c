#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 13332036220597176540ULL;
short var_7 = (short)19939;
unsigned int var_8 = 2747329224U;
unsigned long long int var_11 = 12228375449357015073ULL;
int zero = 0;
signed char var_15 = (signed char)-65;
signed char var_16 = (signed char)0;
unsigned short var_17 = (unsigned short)61836;
void init() {
}

void checksum() {
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
