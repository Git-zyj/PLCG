#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 741223240211315941LL;
unsigned long long int var_9 = 7948482040461831ULL;
_Bool var_11 = (_Bool)0;
long long int var_15 = 3853044530473156005LL;
unsigned long long int var_16 = 4568303153866145945ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 268299588;
int zero = 0;
unsigned int var_19 = 2108461647U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
