#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9329;
unsigned int var_1 = 633844830U;
unsigned short var_6 = (unsigned short)17992;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)65109;
signed char var_11 = (signed char)-23;
int zero = 0;
unsigned short var_13 = (unsigned short)47;
unsigned int var_14 = 262960431U;
unsigned short var_15 = (unsigned short)24619;
unsigned char var_16 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
