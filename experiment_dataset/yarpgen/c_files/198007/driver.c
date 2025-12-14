#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3423;
unsigned char var_4 = (unsigned char)63;
unsigned short var_12 = (unsigned short)45948;
int zero = 0;
unsigned int var_16 = 858923921U;
int var_17 = -87486945;
int var_18 = 1465084004;
signed char var_19 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
