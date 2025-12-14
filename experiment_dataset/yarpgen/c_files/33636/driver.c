#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23413;
unsigned long long int var_1 = 10519975319030839191ULL;
short var_2 = (short)18009;
signed char var_4 = (signed char)-17;
signed char var_5 = (signed char)114;
unsigned short var_6 = (unsigned short)37658;
unsigned int var_7 = 2969047882U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-3215;
unsigned long long int var_14 = 17771111271901924255ULL;
unsigned short var_15 = (unsigned short)18915;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
