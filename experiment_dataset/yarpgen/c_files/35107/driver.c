#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1203094978U;
unsigned long long int var_3 = 2767437708640163777ULL;
unsigned long long int var_10 = 10377399534963811730ULL;
unsigned long long int var_13 = 8850474020331124091ULL;
unsigned long long int var_14 = 15029297922204716236ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3913248857584756974LL;
signed char var_17 = (signed char)89;
unsigned char var_18 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
