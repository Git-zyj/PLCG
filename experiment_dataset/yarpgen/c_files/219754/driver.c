#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 12920156738546924328ULL;
unsigned int var_4 = 1621092241U;
unsigned short var_6 = (unsigned short)19473;
unsigned long long int var_8 = 14361703125519076139ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-86;
signed char var_18 = (signed char)53;
unsigned char var_19 = (unsigned char)44;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)3860;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
