#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1197625713U;
unsigned char var_3 = (unsigned char)64;
unsigned short var_4 = (unsigned short)54953;
signed char var_6 = (signed char)69;
int zero = 0;
unsigned char var_15 = (unsigned char)102;
unsigned short var_16 = (unsigned short)28046;
short var_17 = (short)1575;
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
