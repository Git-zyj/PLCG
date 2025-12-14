#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 2112455873;
unsigned int var_10 = 3448614177U;
unsigned long long int var_13 = 416792978677946438ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_18 = -7009549430326556669LL;
unsigned int var_19 = 3358498943U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
