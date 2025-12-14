#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49102;
short var_2 = (short)2486;
int var_3 = 981143046;
short var_4 = (short)2092;
signed char var_5 = (signed char)-36;
unsigned short var_6 = (unsigned short)10869;
int var_8 = -1444045912;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-17747;
int var_12 = 308172817;
unsigned int var_13 = 3019842640U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
