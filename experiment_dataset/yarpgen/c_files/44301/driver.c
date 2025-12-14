#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 779638213;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 3120344866457489610ULL;
int zero = 0;
signed char var_11 = (signed char)49;
long long int var_12 = 8738230665996803170LL;
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
