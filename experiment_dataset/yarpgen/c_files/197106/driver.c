#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1074858159U;
signed char var_3 = (signed char)-102;
unsigned char var_5 = (unsigned char)104;
signed char var_7 = (signed char)-13;
unsigned int var_8 = 3049933344U;
short var_11 = (short)5537;
unsigned long long int var_14 = 6928264539303255936ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)29274;
unsigned int var_18 = 1414989144U;
signed char var_19 = (signed char)111;
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
