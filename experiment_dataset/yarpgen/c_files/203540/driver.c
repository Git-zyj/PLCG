#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2576792008U;
int var_1 = -1263985467;
unsigned int var_2 = 1292549340U;
_Bool var_5 = (_Bool)1;
int var_8 = -1949453811;
int var_9 = -1897679954;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1007840659U;
int zero = 0;
signed char var_14 = (signed char)22;
unsigned long long int var_15 = 8422896562988462341ULL;
void init() {
}

void checksum() {
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
