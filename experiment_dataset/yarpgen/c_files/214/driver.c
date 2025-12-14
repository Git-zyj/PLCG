#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3570452400U;
unsigned short var_6 = (unsigned short)54260;
unsigned int var_7 = 2152121391U;
short var_9 = (short)23513;
signed char var_10 = (signed char)69;
signed char var_11 = (signed char)52;
unsigned int var_15 = 3049678187U;
int zero = 0;
unsigned short var_16 = (unsigned short)37224;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)112;
unsigned int var_19 = 3143494441U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
