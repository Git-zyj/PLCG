#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2840328557U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 31395640733244765ULL;
unsigned long long int var_12 = 18125913069428559415ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-17537;
unsigned char var_15 = (unsigned char)137;
unsigned short var_16 = (unsigned short)59272;
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
