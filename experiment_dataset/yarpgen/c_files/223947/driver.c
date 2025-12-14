#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 828594306U;
long long int var_3 = -5283811632217007346LL;
unsigned short var_4 = (unsigned short)43729;
unsigned int var_6 = 4166218689U;
unsigned long long int var_7 = 290646248139114447ULL;
unsigned int var_10 = 628212788U;
_Bool var_13 = (_Bool)1;
int var_15 = -618315123;
long long int var_17 = -8048348602520677606LL;
int zero = 0;
unsigned long long int var_20 = 12099220161494584157ULL;
unsigned long long int var_21 = 14468444139647898454ULL;
signed char var_22 = (signed char)4;
void init() {
}

void checksum() {
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
