#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31795;
_Bool var_1 = (_Bool)1;
short var_4 = (short)-17932;
signed char var_7 = (signed char)-124;
short var_8 = (short)13966;
unsigned short var_9 = (unsigned short)41982;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-19386;
unsigned short var_13 = (unsigned short)2855;
signed char var_14 = (signed char)-80;
unsigned int var_15 = 709536055U;
int zero = 0;
unsigned int var_16 = 2848746117U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)3;
unsigned short var_19 = (unsigned short)45826;
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
