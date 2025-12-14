#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 985233868U;
unsigned int var_6 = 551793197U;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
short var_11 = (short)21619;
unsigned long long int var_12 = 17031955147521523898ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
