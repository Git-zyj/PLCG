#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 659912083;
unsigned int var_9 = 180203488U;
signed char var_11 = (signed char)45;
unsigned int var_15 = 2647227413U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 16096170085937118586ULL;
unsigned long long int var_18 = 6315578456464317137ULL;
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
