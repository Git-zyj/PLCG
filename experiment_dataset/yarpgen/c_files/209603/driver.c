#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -95679391477778968LL;
long long int var_11 = 2064800193904537160LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1151477639U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
