#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-61;
unsigned long long int var_2 = 15366039837400224675ULL;
signed char var_6 = (signed char)123;
int zero = 0;
long long int var_13 = 557956933898430667LL;
unsigned int var_14 = 2387654013U;
unsigned long long int var_15 = 11363406771194574366ULL;
long long int var_16 = -1320040202640707056LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
