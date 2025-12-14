#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6566407398734611469ULL;
long long int var_9 = 3324536974339594957LL;
unsigned int var_10 = 2473268273U;
short var_11 = (short)28697;
unsigned short var_12 = (unsigned short)47929;
short var_13 = (short)-31070;
unsigned int var_18 = 2314791522U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3059575807U;
int var_21 = -240463460;
unsigned short var_22 = (unsigned short)40308;
unsigned short var_23 = (unsigned short)58850;
signed char var_24 = (signed char)-83;
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
