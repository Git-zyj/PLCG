#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9335;
unsigned char var_3 = (unsigned char)218;
unsigned long long int var_8 = 421236496365265616ULL;
unsigned char var_11 = (unsigned char)140;
int var_12 = -612275181;
long long int var_14 = 7058896452937064386LL;
long long int var_15 = 3308853831463392617LL;
unsigned short var_16 = (unsigned short)10859;
short var_17 = (short)-314;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)5599;
unsigned char var_21 = (unsigned char)242;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
