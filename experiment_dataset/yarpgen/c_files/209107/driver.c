#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
short var_1 = (short)-16111;
unsigned short var_4 = (unsigned short)49999;
signed char var_5 = (signed char)4;
signed char var_6 = (signed char)4;
unsigned char var_7 = (unsigned char)88;
int var_11 = -1826012401;
unsigned char var_14 = (unsigned char)179;
int zero = 0;
unsigned char var_15 = (unsigned char)30;
short var_16 = (short)3092;
short var_17 = (short)-6820;
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
