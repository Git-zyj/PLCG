#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22216;
unsigned char var_1 = (unsigned char)234;
unsigned int var_2 = 294119252U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)57945;
short var_7 = (short)23028;
unsigned int var_11 = 2259660028U;
unsigned short var_13 = (unsigned short)39256;
int zero = 0;
unsigned char var_18 = (unsigned char)203;
short var_19 = (short)29390;
unsigned short var_20 = (unsigned short)40954;
unsigned char var_21 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
