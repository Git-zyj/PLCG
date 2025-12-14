#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1628217769;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-2893;
unsigned int var_13 = 2406624283U;
int zero = 0;
int var_15 = -890961650;
int var_16 = -2080314132;
unsigned char var_17 = (unsigned char)119;
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
