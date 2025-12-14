#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9670;
unsigned long long int var_1 = 6315659100658818844ULL;
unsigned char var_2 = (unsigned char)96;
short var_4 = (short)-1791;
short var_6 = (short)17686;
signed char var_7 = (signed char)76;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-14303;
int var_12 = 515903445;
int zero = 0;
unsigned int var_16 = 737805555U;
unsigned char var_17 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
