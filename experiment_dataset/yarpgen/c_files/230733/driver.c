#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-120;
int var_2 = 1497384008;
int var_6 = 1889644659;
unsigned short var_10 = (unsigned short)2678;
unsigned char var_12 = (unsigned char)203;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-84;
short var_17 = (short)23255;
short var_18 = (short)-12940;
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
