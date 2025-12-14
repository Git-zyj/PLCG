#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_20 = -6105891997017592507LL;
unsigned short var_21 = (unsigned short)26023;
unsigned char var_22 = (unsigned char)223;
unsigned short var_23 = (unsigned short)23572;
int var_24 = -167203463;
unsigned short var_25 = (unsigned short)46885;
unsigned char var_26 = (unsigned char)1;
unsigned int var_27 = 3656666211U;
long long int var_28 = -8473855518211794540LL;
long long int var_29 = -795405504343428686LL;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)61;
unsigned char var_32 = (unsigned char)47;
unsigned short var_33 = (unsigned short)2776;
long long int var_34 = -5946095263314166339LL;
unsigned char var_35 = (unsigned char)232;
unsigned int var_36 = 3315698583U;
unsigned int var_37 = 1132402009U;
int var_38 = 1821948798;
int var_39 = -538754267;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
