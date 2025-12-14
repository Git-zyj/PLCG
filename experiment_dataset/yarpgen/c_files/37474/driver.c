#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17694;
long long int var_2 = -4950811480594902597LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_14 = 17700882828377584251ULL;
int zero = 0;
unsigned long long int var_16 = 2699507447814752232ULL;
unsigned long long int var_17 = 1931188401824678574ULL;
unsigned short var_18 = (unsigned short)16099;
void init() {
}

void checksum() {
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
