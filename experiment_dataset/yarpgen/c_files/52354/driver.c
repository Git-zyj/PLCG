#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1170063580;
long long int var_1 = 2035284679606644629LL;
unsigned int var_7 = 488999813U;
unsigned short var_8 = (unsigned short)29597;
unsigned int var_10 = 3457242016U;
long long int var_11 = 4215284692525531200LL;
unsigned int var_14 = 1248892800U;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned long long int var_18 = 37093969655238262ULL;
_Bool var_19 = (_Bool)1;
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
