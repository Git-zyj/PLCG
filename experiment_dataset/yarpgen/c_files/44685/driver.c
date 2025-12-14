#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)57;
unsigned int var_4 = 3374919635U;
unsigned int var_10 = 1384707415U;
int zero = 0;
signed char var_15 = (signed char)76;
unsigned short var_16 = (unsigned short)12212;
signed char var_17 = (signed char)103;
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
