#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1291168994143515883ULL;
unsigned long long int var_5 = 6393427683795683664ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 4153393297518726862LL;
int zero = 0;
long long int var_11 = -1006812637607660979LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
