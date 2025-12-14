#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 950795179;
int var_3 = 301825827;
unsigned long long int var_5 = 9443387057641059920ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3517790007U;
unsigned long long int var_17 = 6952306836941113688ULL;
signed char var_18 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
