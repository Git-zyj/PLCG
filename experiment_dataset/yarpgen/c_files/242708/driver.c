#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20840;
signed char var_6 = (signed char)-64;
int var_8 = 61116884;
short var_9 = (short)7513;
unsigned int var_11 = 1663595629U;
unsigned char var_12 = (unsigned char)235;
short var_14 = (short)-32471;
int zero = 0;
unsigned long long int var_15 = 16306654725030595884ULL;
int var_16 = -251681327;
int var_17 = 360786073;
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
