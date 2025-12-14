#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10528372824239316610ULL;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-15281;
unsigned long long int var_14 = 10951427432876227352ULL;
unsigned char var_15 = (unsigned char)43;
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
