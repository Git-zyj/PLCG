#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11348;
unsigned long long int var_2 = 13850568331029500479ULL;
unsigned long long int var_3 = 3363950024449626870ULL;
long long int var_5 = 4172759854745855944LL;
unsigned long long int var_6 = 17098959871290434204ULL;
short var_7 = (short)32729;
unsigned char var_8 = (unsigned char)96;
unsigned char var_9 = (unsigned char)32;
unsigned int var_12 = 3772980827U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)33761;
unsigned char var_19 = (unsigned char)206;
unsigned long long int var_20 = 9828524991704596403ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
