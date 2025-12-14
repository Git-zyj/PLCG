#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2717;
short var_4 = (short)2546;
int var_7 = 1056228834;
signed char var_10 = (signed char)87;
unsigned long long int var_15 = 2605479174452645050ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)233;
unsigned int var_17 = 297766077U;
short var_18 = (short)-9852;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
