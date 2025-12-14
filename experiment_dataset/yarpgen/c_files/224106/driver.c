#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -1609013336;
unsigned int var_6 = 2722830791U;
long long int var_7 = 2546150182335389511LL;
unsigned long long int var_8 = 3273036778698063537ULL;
int zero = 0;
unsigned long long int var_20 = 5331013778919841191ULL;
int var_21 = 2105922344;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
