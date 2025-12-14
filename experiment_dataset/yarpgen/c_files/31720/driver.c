#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10467964825488953506ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-13627;
int var_10 = -1111740299;
short var_12 = (short)539;
unsigned int var_13 = 4170465567U;
short var_14 = (short)-22016;
unsigned int var_15 = 1063771313U;
int zero = 0;
unsigned long long int var_16 = 9498096122973400886ULL;
short var_17 = (short)-19650;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
