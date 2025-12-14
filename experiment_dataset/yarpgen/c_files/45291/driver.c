#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 114514936;
unsigned long long int var_5 = 5177487591681739245ULL;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)11;
unsigned long long int var_11 = 550022001543913047ULL;
unsigned short var_12 = (unsigned short)21516;
unsigned short var_13 = (unsigned short)20455;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)55731;
int zero = 0;
int var_18 = 743486658;
signed char var_19 = (signed char)0;
signed char var_20 = (signed char)-45;
unsigned long long int var_21 = 14009613096969175012ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
