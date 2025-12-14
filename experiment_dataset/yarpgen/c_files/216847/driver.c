#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)8250;
signed char var_13 = (signed char)(-127 - 1);
unsigned char var_16 = (unsigned char)33;
int zero = 0;
int var_20 = 437194597;
unsigned char var_21 = (unsigned char)12;
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
