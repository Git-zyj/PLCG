#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)17;
unsigned int var_5 = 3664021617U;
unsigned int var_7 = 3660229361U;
unsigned char var_8 = (unsigned char)107;
unsigned long long int var_14 = 5227770205729793606ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
unsigned int var_21 = 4018360813U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
