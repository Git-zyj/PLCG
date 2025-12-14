#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9642;
unsigned short var_2 = (unsigned short)976;
unsigned int var_5 = 2869377695U;
unsigned short var_7 = (unsigned short)31778;
int var_8 = 1682317968;
unsigned short var_10 = (unsigned short)1594;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)68;
int zero = 0;
unsigned short var_16 = (unsigned short)19169;
unsigned short var_17 = (unsigned short)43395;
signed char var_18 = (signed char)-74;
unsigned short var_19 = (unsigned short)10947;
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
