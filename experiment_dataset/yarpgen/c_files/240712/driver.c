#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18143659402378374516ULL;
long long int var_7 = -7042026753278055634LL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)201;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -945520481627265712LL;
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
