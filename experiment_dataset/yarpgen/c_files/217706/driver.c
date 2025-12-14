#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12096;
short var_6 = (short)3884;
unsigned char var_8 = (unsigned char)53;
_Bool var_11 = (_Bool)0;
int var_13 = 702081873;
unsigned int var_15 = 2138043518U;
int zero = 0;
short var_19 = (short)29179;
signed char var_20 = (signed char)-81;
unsigned char var_21 = (unsigned char)128;
int var_22 = -1571736545;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
