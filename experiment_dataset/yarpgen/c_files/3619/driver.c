#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 37960733U;
unsigned long long int var_10 = 12551282246057039553ULL;
unsigned long long int var_11 = 1224968803502912110ULL;
unsigned char var_12 = (unsigned char)234;
short var_14 = (short)-16172;
int zero = 0;
unsigned short var_15 = (unsigned short)7350;
short var_16 = (short)-7875;
short var_17 = (short)10287;
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
