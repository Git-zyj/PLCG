#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24681;
short var_3 = (short)-3180;
int var_5 = 1981741416;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)52077;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 109679729U;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)20453;
unsigned short var_20 = (unsigned short)7078;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
