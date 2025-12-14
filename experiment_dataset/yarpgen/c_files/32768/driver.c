#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)2619;
unsigned int var_6 = 4114456336U;
unsigned short var_8 = (unsigned short)2766;
_Bool var_10 = (_Bool)1;
short var_11 = (short)32383;
_Bool var_12 = (_Bool)1;
int var_13 = -483992802;
int zero = 0;
int var_16 = 1329455563;
short var_17 = (short)-2659;
int var_18 = -2071247703;
unsigned int var_19 = 1587894434U;
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
