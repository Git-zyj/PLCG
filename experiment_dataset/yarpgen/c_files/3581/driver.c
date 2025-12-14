#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1464356704U;
unsigned short var_7 = (unsigned short)57586;
int var_12 = -121274000;
short var_14 = (short)-12576;
int zero = 0;
unsigned short var_16 = (unsigned short)24419;
unsigned short var_17 = (unsigned short)48194;
void init() {
}

void checksum() {
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
