#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)10;
signed char var_5 = (signed char)93;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2783032353U;
unsigned char var_14 = (unsigned char)160;
unsigned long long int var_15 = 16852628558397201320ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
