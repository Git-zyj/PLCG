#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 15337399302768304473ULL;
int var_10 = -218673915;
int var_14 = 388587839;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
signed char var_17 = (signed char)-59;
unsigned long long int var_18 = 14450206439250585242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
