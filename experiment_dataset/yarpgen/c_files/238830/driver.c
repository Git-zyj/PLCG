#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9522;
long long int var_7 = -7551691519466073816LL;
unsigned long long int var_10 = 12822416178774056535ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-107;
long long int var_18 = -8619411270117867094LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16470899121938947464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
