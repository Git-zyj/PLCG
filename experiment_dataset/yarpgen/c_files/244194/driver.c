#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)102;
_Bool var_10 = (_Bool)1;
long long int var_11 = -418345086253445803LL;
unsigned char var_12 = (unsigned char)163;
int zero = 0;
unsigned long long int var_13 = 13055901913557163221ULL;
long long int var_14 = 2552835606246318867LL;
unsigned char var_15 = (unsigned char)233;
unsigned char var_16 = (unsigned char)117;
unsigned int var_17 = 3054227470U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
