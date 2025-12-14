#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)94;
unsigned char var_2 = (unsigned char)20;
unsigned int var_5 = 2658642533U;
signed char var_6 = (signed char)62;
unsigned char var_7 = (unsigned char)212;
unsigned short var_8 = (unsigned short)1725;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)56382;
unsigned int var_14 = 1347445061U;
int zero = 0;
unsigned int var_17 = 2554142059U;
unsigned char var_18 = (unsigned char)150;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
