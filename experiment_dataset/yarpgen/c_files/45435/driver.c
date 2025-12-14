#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)27;
unsigned short var_3 = (unsigned short)34551;
unsigned long long int var_4 = 13931003305902439672ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)14;
unsigned short var_7 = (unsigned short)45875;
short var_8 = (short)-23663;
signed char var_9 = (signed char)-3;
unsigned int var_10 = 2955470265U;
int var_11 = -794958711;
unsigned int var_12 = 2943352152U;
short var_13 = (short)6402;
short var_14 = (short)9972;
unsigned char var_15 = (unsigned char)170;
unsigned short var_16 = (unsigned short)4566;
signed char var_17 = (signed char)-6;
unsigned char var_18 = (unsigned char)75;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
unsigned char var_21 = (unsigned char)221;
unsigned short var_22 = (unsigned short)53978;
unsigned char var_23 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
