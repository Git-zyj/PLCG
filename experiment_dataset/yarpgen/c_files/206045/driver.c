#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1873811422;
unsigned int var_6 = 2143452256U;
unsigned short var_8 = (unsigned short)6160;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)70;
signed char var_14 = (signed char)-29;
int var_16 = -1312836431;
long long int var_17 = -4482687248166662177LL;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
_Bool var_20 = (_Bool)1;
int var_21 = 731900466;
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
