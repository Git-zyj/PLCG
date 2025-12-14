#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5985085177906962066LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2321018952U;
unsigned long long int var_11 = 11571205313866700956ULL;
unsigned long long int var_13 = 6048840098029833656ULL;
int zero = 0;
long long int var_14 = 1434954108143646442LL;
unsigned int var_15 = 2644532881U;
signed char var_16 = (signed char)109;
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
