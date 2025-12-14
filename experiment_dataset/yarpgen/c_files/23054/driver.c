#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13107;
unsigned char var_5 = (unsigned char)156;
short var_6 = (short)18711;
int zero = 0;
unsigned int var_12 = 1612584500U;
short var_13 = (short)-22597;
unsigned int var_14 = 2412636882U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
