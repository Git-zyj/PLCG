#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7971536415422558582ULL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -6205528110359262150LL;
long long int var_7 = -6619553666486776143LL;
unsigned int var_13 = 526519997U;
int zero = 0;
unsigned long long int var_15 = 13010716633273218365ULL;
int var_16 = -1886493620;
void init() {
}

void checksum() {
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
