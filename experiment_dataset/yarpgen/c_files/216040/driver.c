#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_16 = -1273360480;
unsigned long long int var_17 = 578673651851950277ULL;
unsigned short var_18 = (unsigned short)58739;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1917450206U;
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
