#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3771217489U;
unsigned long long int var_11 = 7727604511799570718ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1170305473U;
unsigned int var_17 = 622198801U;
unsigned int var_18 = 974739749U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
