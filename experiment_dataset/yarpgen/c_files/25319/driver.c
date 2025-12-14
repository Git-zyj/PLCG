#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1377880945;
unsigned short var_2 = (unsigned short)19761;
int var_3 = 1670257111;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2531246610U;
int var_10 = -2107725034;
unsigned short var_13 = (unsigned short)56404;
unsigned char var_15 = (unsigned char)186;
short var_17 = (short)-29061;
int zero = 0;
short var_18 = (short)30797;
unsigned short var_19 = (unsigned short)56724;
signed char var_20 = (signed char)-66;
void init() {
}

void checksum() {
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
