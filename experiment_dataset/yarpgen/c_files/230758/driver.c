#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 990063078;
long long int var_3 = 2971106724478987270LL;
_Bool var_5 = (_Bool)0;
int var_6 = 1061365246;
long long int var_8 = 8021853169055484858LL;
int var_10 = 1699294949;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 4206637884863979792ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1749533760;
unsigned char var_19 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
