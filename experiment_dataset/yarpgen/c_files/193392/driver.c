#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1819680387218275361LL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)17;
_Bool var_8 = (_Bool)1;
long long int var_9 = 2102851550101266511LL;
unsigned int var_10 = 1881504158U;
long long int var_11 = 1917919877512064716LL;
int zero = 0;
unsigned int var_13 = 1907992914U;
unsigned int var_14 = 3456449935U;
long long int var_15 = -900792881835467056LL;
unsigned int var_16 = 156976578U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
