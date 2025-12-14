#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 10431040600592426512ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)78;
int zero = 0;
unsigned short var_20 = (unsigned short)37075;
unsigned int var_21 = 950658191U;
signed char var_22 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
