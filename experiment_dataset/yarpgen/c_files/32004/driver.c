#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 796974027U;
unsigned char var_7 = (unsigned char)105;
short var_11 = (short)-29747;
unsigned long long int var_16 = 858064101672937645ULL;
short var_17 = (short)-4249;
int zero = 0;
short var_18 = (short)14093;
unsigned int var_19 = 2518283455U;
short var_20 = (short)559;
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
