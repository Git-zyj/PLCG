#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1725362046U;
long long int var_4 = -2069094912329430854LL;
signed char var_5 = (signed char)125;
unsigned short var_7 = (unsigned short)12040;
_Bool var_9 = (_Bool)0;
int var_10 = 1652091782;
long long int var_12 = 2978693894187805885LL;
int var_13 = -1357611232;
int zero = 0;
signed char var_14 = (signed char)39;
signed char var_15 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
