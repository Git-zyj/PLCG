#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2698818886U;
int var_12 = 1255643840;
signed char var_13 = (signed char)-115;
int zero = 0;
unsigned short var_14 = (unsigned short)2825;
signed char var_15 = (signed char)68;
signed char var_16 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
