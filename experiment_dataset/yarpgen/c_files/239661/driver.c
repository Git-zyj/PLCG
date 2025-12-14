#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28529;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)19654;
unsigned long long int var_10 = 4695583592326864113ULL;
int var_11 = 661130075;
unsigned int var_12 = 3302201886U;
int var_13 = 1044314960;
unsigned short var_15 = (unsigned short)42023;
int zero = 0;
signed char var_20 = (signed char)-28;
short var_21 = (short)19530;
unsigned short var_22 = (unsigned short)2207;
unsigned short var_23 = (unsigned short)35331;
unsigned int var_24 = 3342050146U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
