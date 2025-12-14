#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1081499396;
signed char var_3 = (signed char)107;
signed char var_4 = (signed char)16;
long long int var_5 = 5090209632646631227LL;
short var_6 = (short)3123;
unsigned int var_8 = 147332822U;
unsigned char var_9 = (unsigned char)111;
unsigned int var_10 = 1748472976U;
unsigned char var_11 = (unsigned char)13;
short var_12 = (short)-13921;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3625168765U;
unsigned char var_16 = (unsigned char)149;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -3003199561631566926LL;
unsigned long long int var_19 = 3862540944113001524ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
