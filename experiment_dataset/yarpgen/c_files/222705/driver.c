#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29790;
short var_3 = (short)16629;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)232;
int zero = 0;
int var_15 = 1140268683;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
