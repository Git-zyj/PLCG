#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)3488;
unsigned char var_7 = (unsigned char)101;
unsigned int var_9 = 1179701237U;
int zero = 0;
short var_13 = (short)-30913;
unsigned short var_14 = (unsigned short)45261;
unsigned short var_15 = (unsigned short)24615;
unsigned char var_16 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
