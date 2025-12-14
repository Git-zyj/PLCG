#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1239652857;
int var_1 = 161917230;
unsigned int var_3 = 3331207490U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3321226303U;
unsigned long long int var_6 = 7851779657452458607ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 8643183040445798549ULL;
unsigned long long int var_15 = 12859094211681097304ULL;
short var_18 = (short)22318;
int zero = 0;
unsigned long long int var_19 = 2542521117020806332ULL;
long long int var_20 = 6390067068561104033LL;
int var_21 = 522504428;
unsigned short var_22 = (unsigned short)4894;
int var_23 = -1077504150;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
