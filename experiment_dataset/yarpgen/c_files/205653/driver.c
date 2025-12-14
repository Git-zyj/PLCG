#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)190;
long long int var_16 = -1835578261840295139LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 793393514564646235ULL;
unsigned int var_19 = 3613584333U;
int var_20 = 1518444291;
int var_21 = -364874997;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
