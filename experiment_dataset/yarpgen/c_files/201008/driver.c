#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)13377;
unsigned char var_9 = (unsigned char)3;
unsigned short var_10 = (unsigned short)59179;
short var_11 = (short)12491;
unsigned char var_13 = (unsigned char)45;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)246;
int zero = 0;
unsigned short var_19 = (unsigned short)52694;
unsigned char var_20 = (unsigned char)130;
unsigned int var_21 = 919598236U;
unsigned int var_22 = 1312926412U;
unsigned int var_23 = 1522784115U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
