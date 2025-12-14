#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42922;
signed char var_6 = (signed char)-70;
_Bool var_7 = (_Bool)1;
short var_8 = (short)29105;
unsigned short var_10 = (unsigned short)14700;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
signed char var_17 = (signed char)14;
int var_18 = -337880552;
_Bool var_19 = (_Bool)1;
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
