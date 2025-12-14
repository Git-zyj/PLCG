#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1535356237;
signed char var_4 = (signed char)2;
short var_6 = (short)-2701;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)253;
int var_16 = 659807116;
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
