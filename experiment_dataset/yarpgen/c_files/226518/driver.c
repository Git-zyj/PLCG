#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2030391847;
unsigned int var_6 = 286336735U;
long long int var_11 = 8156482865796204055LL;
long long int var_13 = 5917002356624199726LL;
long long int var_14 = -890657315818885461LL;
int zero = 0;
long long int var_15 = -6376779276169055968LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2894625622U;
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
