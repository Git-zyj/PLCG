#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)54663;
signed char var_2 = (signed char)-92;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1618732120U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)6001;
unsigned char var_7 = (unsigned char)21;
unsigned int var_8 = 764188026U;
signed char var_9 = (signed char)-104;
unsigned int var_10 = 3140720483U;
unsigned char var_11 = (unsigned char)134;
signed char var_12 = (signed char)-57;
unsigned int var_13 = 3300101827U;
unsigned int var_14 = 2314392712U;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 339149412U;
signed char var_18 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
