#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 806126404;
unsigned int var_8 = 2753728662U;
unsigned short var_10 = (unsigned short)345;
int zero = 0;
unsigned int var_13 = 2363307979U;
unsigned int var_14 = 1115268771U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
