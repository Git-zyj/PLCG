#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)833;
short var_9 = (short)-22544;
unsigned char var_12 = (unsigned char)154;
unsigned short var_15 = (unsigned short)17590;
int zero = 0;
short var_16 = (short)-6028;
unsigned char var_17 = (unsigned char)238;
unsigned short var_18 = (unsigned short)15867;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
