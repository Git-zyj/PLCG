#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)19197;
unsigned int var_5 = 2066787760U;
unsigned short var_6 = (unsigned short)63090;
short var_7 = (short)25003;
unsigned short var_8 = (unsigned short)29438;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-86;
unsigned char var_12 = (unsigned char)33;
unsigned short var_13 = (unsigned short)8977;
signed char var_14 = (signed char)53;
unsigned int var_15 = 3866563144U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
