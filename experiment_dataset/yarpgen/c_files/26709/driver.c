#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14108493457006293718ULL;
long long int var_11 = 2888856015688962437LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -8800399692776759656LL;
unsigned short var_16 = (unsigned short)28575;
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
