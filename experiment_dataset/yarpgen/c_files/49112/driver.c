#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1732195750U;
unsigned char var_4 = (unsigned char)101;
unsigned char var_6 = (unsigned char)65;
unsigned char var_7 = (unsigned char)118;
signed char var_8 = (signed char)4;
unsigned int var_9 = 366742291U;
int var_12 = -245810966;
unsigned int var_13 = 1668943269U;
long long int var_14 = 8149040100046336157LL;
short var_16 = (short)-702;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)55;
signed char var_20 = (signed char)-61;
unsigned long long int var_21 = 12033156057875310796ULL;
unsigned short var_22 = (unsigned short)48468;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
