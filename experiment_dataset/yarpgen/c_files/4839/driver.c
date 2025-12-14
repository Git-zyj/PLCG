#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47697;
unsigned int var_4 = 3852900366U;
signed char var_8 = (signed char)33;
unsigned int var_10 = 1952578716U;
int zero = 0;
unsigned short var_11 = (unsigned short)1595;
short var_12 = (short)14679;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
