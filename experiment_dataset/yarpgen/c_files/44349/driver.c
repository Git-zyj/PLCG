#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8867;
_Bool var_3 = (_Bool)0;
short var_10 = (short)15360;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1464150478U;
unsigned int var_17 = 733415056U;
void init() {
}

void checksum() {
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
