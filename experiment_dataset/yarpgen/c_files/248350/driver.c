#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1599469772U;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 4127039105U;
int zero = 0;
unsigned char var_10 = (unsigned char)5;
unsigned long long int var_11 = 14928749942042605275ULL;
unsigned int var_12 = 1000065377U;
signed char var_13 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
