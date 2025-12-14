#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_7 = 3599945318604025124ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2636893916946291551ULL;
unsigned int var_11 = 2272632621U;
signed char var_12 = (signed char)-10;
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
