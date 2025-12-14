#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2423630356U;
unsigned char var_8 = (unsigned char)92;
unsigned int var_10 = 2984215624U;
unsigned int var_11 = 1117760592U;
long long int var_14 = 8333642042912686936LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14842073100020621758ULL;
long long int var_19 = -6939257166058439310LL;
int zero = 0;
long long int var_20 = -2718135748779378370LL;
unsigned int var_21 = 81293115U;
long long int var_22 = -2389333034624821021LL;
int var_23 = 1802256329;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
