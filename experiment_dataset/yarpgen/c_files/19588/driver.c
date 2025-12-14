#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 2634164392U;
unsigned long long int var_6 = 1177660136751290821ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2278336516647439432LL;
unsigned long long int var_16 = 1246101033378830000ULL;
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
