#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5731115393308511354LL;
_Bool var_5 = (_Bool)0;
short var_12 = (short)-13951;
int var_15 = 2080802125;
short var_17 = (short)-9887;
int zero = 0;
signed char var_19 = (signed char)-33;
unsigned int var_20 = 2688635175U;
signed char var_21 = (signed char)-23;
unsigned long long int var_22 = 16379406682994956111ULL;
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
