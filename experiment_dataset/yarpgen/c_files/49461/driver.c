#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)11733;
short var_10 = (short)22458;
short var_11 = (short)-14201;
int zero = 0;
unsigned char var_15 = (unsigned char)23;
unsigned int var_16 = 1557197500U;
unsigned int var_17 = 612619727U;
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
