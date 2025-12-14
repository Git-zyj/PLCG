#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)21177;
short var_8 = (short)-32365;
unsigned int var_10 = 2929057924U;
unsigned long long int var_16 = 10431611815279755904ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2385630595U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
