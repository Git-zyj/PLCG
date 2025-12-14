#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -512437785436206160LL;
unsigned int var_3 = 3688824879U;
long long int var_4 = -2870298757102029176LL;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 4156669511U;
long long int var_15 = 1810750381307624683LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4166028002U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
