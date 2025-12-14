#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2028596899;
long long int var_1 = -4454530902804006980LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)245;
short var_4 = (short)14394;
signed char var_5 = (signed char)43;
unsigned char var_6 = (unsigned char)221;
short var_7 = (short)-22554;
int var_9 = 1387511717;
signed char var_10 = (signed char)124;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1133939241U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12173043684065544785ULL;
int zero = 0;
int var_15 = 408301274;
long long int var_16 = 3220969248203933546LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)229;
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
