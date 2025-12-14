#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-36;
unsigned char var_10 = (unsigned char)203;
unsigned long long int var_13 = 13816776369775817417ULL;
int zero = 0;
signed char var_15 = (signed char)-75;
signed char var_16 = (signed char)-113;
unsigned int var_17 = 3765071154U;
_Bool var_18 = (_Bool)1;
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
