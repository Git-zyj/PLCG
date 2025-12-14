#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1671792215095104966ULL;
int var_7 = 1515720959;
short var_8 = (short)721;
unsigned int var_10 = 3676480894U;
int zero = 0;
unsigned short var_15 = (unsigned short)12077;
signed char var_16 = (signed char)-22;
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
