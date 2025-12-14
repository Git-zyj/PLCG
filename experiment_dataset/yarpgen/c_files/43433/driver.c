#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6334235903897845800LL;
long long int var_1 = 6699029719195696629LL;
signed char var_2 = (signed char)-70;
unsigned long long int var_3 = 2953889076947623629ULL;
unsigned short var_4 = (unsigned short)52844;
long long int var_5 = -8857465755729457838LL;
signed char var_6 = (signed char)107;
signed char var_12 = (signed char)-124;
int var_13 = 525490986;
signed char var_15 = (signed char)-92;
unsigned long long int var_16 = 14556181382385575999ULL;
int zero = 0;
int var_17 = -1583127722;
long long int var_18 = -7314167319051852201LL;
int var_19 = -489008098;
int var_20 = -2100236870;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
