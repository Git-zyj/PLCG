#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)24697;
int var_10 = 1904325278;
_Bool var_15 = (_Bool)0;
unsigned char var_19 = (unsigned char)222;
int zero = 0;
int var_20 = -2037176329;
unsigned long long int var_21 = 12537540242434751134ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
