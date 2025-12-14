#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1138661481;
unsigned int var_5 = 1956587779U;
short var_8 = (short)-8406;
signed char var_9 = (signed char)-92;
_Bool var_12 = (_Bool)1;
int var_13 = 1190352023;
long long int var_14 = -7356353301172197864LL;
int zero = 0;
unsigned int var_17 = 2492550954U;
short var_18 = (short)23069;
unsigned short var_19 = (unsigned short)3760;
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
