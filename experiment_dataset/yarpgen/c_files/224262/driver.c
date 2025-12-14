#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1776437445;
int var_3 = 1087599247;
int var_4 = 1552551373;
long long int var_5 = 2186952212857499349LL;
int var_8 = 657485802;
signed char var_9 = (signed char)-38;
unsigned int var_11 = 2190835701U;
unsigned long long int var_14 = 9630694202562098812ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3190853582220702463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
