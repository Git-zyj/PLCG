#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 224981720;
unsigned short var_1 = (unsigned short)13845;
short var_4 = (short)-32410;
signed char var_5 = (signed char)31;
short var_6 = (short)-9906;
int zero = 0;
unsigned int var_10 = 2005333498U;
unsigned char var_11 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
