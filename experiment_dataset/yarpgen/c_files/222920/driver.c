#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)5532;
short var_6 = (short)-31744;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)62026;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)73;
unsigned short var_15 = (unsigned short)56271;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)41604;
int var_19 = -947520382;
unsigned char var_20 = (unsigned char)229;
unsigned long long int var_21 = 8942916973855268523ULL;
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
