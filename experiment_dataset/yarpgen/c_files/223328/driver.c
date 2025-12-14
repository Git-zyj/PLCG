#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3882172601U;
long long int var_10 = 5720224352125222032LL;
unsigned int var_11 = 3166276605U;
int zero = 0;
unsigned int var_13 = 889008406U;
unsigned long long int var_14 = 8234108156481972924ULL;
unsigned int var_15 = 1527093795U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
