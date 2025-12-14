#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1918660361;
signed char var_4 = (signed char)45;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1936336563U;
unsigned short var_8 = (unsigned short)4176;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)82;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int var_17 = 419664215;
unsigned char var_19 = (unsigned char)173;
int zero = 0;
long long int var_20 = -2565624060855552616LL;
unsigned char var_21 = (unsigned char)73;
void init() {
}

void checksum() {
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
