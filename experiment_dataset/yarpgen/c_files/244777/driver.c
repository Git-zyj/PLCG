#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned long long int var_1 = 15521877375417206235ULL;
signed char var_2 = (signed char)-36;
int var_3 = -500506221;
_Bool var_4 = (_Bool)1;
int var_5 = -1688899129;
unsigned long long int var_9 = 12892597113292231571ULL;
int zero = 0;
signed char var_10 = (signed char)-32;
unsigned char var_11 = (unsigned char)134;
long long int var_12 = 4219624054144682819LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
