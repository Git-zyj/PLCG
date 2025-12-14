#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1671;
unsigned char var_3 = (unsigned char)198;
short var_7 = (short)-3403;
short var_8 = (short)28441;
short var_11 = (short)417;
short var_13 = (short)-26339;
int zero = 0;
unsigned char var_17 = (unsigned char)158;
unsigned char var_18 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
