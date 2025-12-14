#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_3 = (unsigned char)198;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)62794;
int var_11 = 1419270678;
signed char var_12 = (signed char)-88;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)64;
unsigned int var_15 = 942902577U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)62;
int zero = 0;
unsigned short var_19 = (unsigned short)58133;
unsigned int var_20 = 799318897U;
unsigned char var_21 = (unsigned char)70;
unsigned char var_22 = (unsigned char)248;
long long int var_23 = 7014403311796185275LL;
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
