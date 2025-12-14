#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3530674398997851542ULL;
signed char var_1 = (signed char)50;
unsigned long long int var_2 = 834180476016445766ULL;
int var_5 = -583929628;
unsigned int var_6 = 2258771920U;
unsigned int var_8 = 1550729086U;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
signed char var_11 = (signed char)53;
unsigned int var_12 = 3197316817U;
unsigned long long int var_13 = 591402392646864662ULL;
int var_14 = 86416682;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
