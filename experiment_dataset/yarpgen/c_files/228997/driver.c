#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)47843;
long long int var_12 = 9222507195027765273LL;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 664084468U;
unsigned int var_18 = 202491717U;
int zero = 0;
unsigned char var_20 = (unsigned char)209;
_Bool var_21 = (_Bool)1;
long long int var_22 = -128576160087980146LL;
signed char var_23 = (signed char)-126;
long long int var_24 = 3926919930118360173LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
