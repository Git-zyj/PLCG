#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_5 = (short)22107;
int var_6 = -1238020346;
short var_9 = (short)28409;
signed char var_12 = (signed char)-110;
unsigned int var_15 = 2800811015U;
signed char var_16 = (signed char)87;
int var_18 = -1064673366;
int zero = 0;
short var_19 = (short)8085;
int var_20 = 511652145;
long long int var_21 = -4607322656568018326LL;
int var_22 = -1055874770;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
