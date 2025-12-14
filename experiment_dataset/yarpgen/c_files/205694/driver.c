#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1619794019;
unsigned short var_6 = (unsigned short)29465;
short var_7 = (short)29103;
short var_8 = (short)-15186;
int var_11 = 1468035580;
unsigned short var_17 = (unsigned short)16509;
int zero = 0;
unsigned char var_20 = (unsigned char)223;
unsigned char var_21 = (unsigned char)176;
short var_22 = (short)2415;
unsigned char var_23 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
