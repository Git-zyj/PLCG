#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 29194558356458236ULL;
unsigned int var_6 = 3425650922U;
long long int var_8 = 4849855816148474640LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 123902553;
unsigned long long int var_13 = 9921213698951491649ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
