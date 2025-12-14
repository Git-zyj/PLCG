#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned int var_3 = 557721105U;
unsigned short var_4 = (unsigned short)46235;
unsigned char var_5 = (unsigned char)5;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)64;
unsigned char var_12 = (unsigned char)174;
unsigned int var_13 = 3892615915U;
long long int var_16 = -8234708614918119221LL;
signed char var_18 = (signed char)3;
int zero = 0;
unsigned short var_19 = (unsigned short)58636;
unsigned char var_20 = (unsigned char)97;
int var_21 = -338956775;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
