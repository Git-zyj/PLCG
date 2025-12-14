#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2127777264;
_Bool var_10 = (_Bool)0;
long long int var_11 = -2159418144736996312LL;
int zero = 0;
int var_13 = -1229154205;
long long int var_14 = -6153960315754878574LL;
unsigned char var_15 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
