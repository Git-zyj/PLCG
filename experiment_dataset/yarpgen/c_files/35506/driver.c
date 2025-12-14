#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned int var_9 = 2676169980U;
unsigned char var_10 = (unsigned char)161;
long long int var_12 = -2476709776865231603LL;
int zero = 0;
unsigned long long int var_14 = 4886954017298030616ULL;
signed char var_15 = (signed char)-16;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
