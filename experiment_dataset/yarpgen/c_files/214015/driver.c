#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 58272043U;
signed char var_4 = (signed char)-24;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 333712593U;
int zero = 0;
unsigned long long int var_10 = 15478433797420372638ULL;
unsigned long long int var_11 = 6074861830556825099ULL;
unsigned short var_12 = (unsigned short)39850;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
