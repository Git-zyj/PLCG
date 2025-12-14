#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5403167355349092495ULL;
unsigned long long int var_5 = 16296318768791175238ULL;
unsigned int var_8 = 398706999U;
int var_9 = -2127127877;
_Bool var_11 = (_Bool)1;
long long int var_12 = -5581391081700709080LL;
int var_13 = 413135113;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1894415857;
void init() {
}

void checksum() {
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
