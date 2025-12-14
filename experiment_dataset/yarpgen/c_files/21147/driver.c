#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
unsigned char var_2 = (unsigned char)220;
unsigned long long int var_4 = 12171314383917423948ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 70628600U;
long long int var_8 = -1389363168641134822LL;
int var_9 = -1703828460;
short var_10 = (short)-32317;
unsigned short var_11 = (unsigned short)31589;
unsigned short var_14 = (unsigned short)707;
int zero = 0;
unsigned short var_17 = (unsigned short)38572;
long long int var_18 = 56224024732425514LL;
unsigned char var_19 = (unsigned char)6;
unsigned long long int var_20 = 1626472351181839635ULL;
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
