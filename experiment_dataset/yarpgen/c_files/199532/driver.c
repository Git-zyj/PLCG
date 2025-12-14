#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3213839843U;
unsigned int var_2 = 3474150114U;
int var_3 = -1521393698;
unsigned short var_4 = (unsigned short)38481;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)44232;
unsigned int var_13 = 3549955019U;
int zero = 0;
unsigned short var_14 = (unsigned short)44558;
signed char var_15 = (signed char)-119;
unsigned long long int var_16 = 18116327178769052191ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
