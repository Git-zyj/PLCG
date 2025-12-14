#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2078100534U;
short var_3 = (short)5460;
signed char var_4 = (signed char)77;
int var_5 = 836470098;
long long int var_7 = 1594954368264461342LL;
long long int var_8 = 6920430530757053807LL;
unsigned int var_9 = 1898556355U;
int zero = 0;
unsigned long long int var_10 = 5653859160568672875ULL;
long long int var_11 = -8937364697394308438LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
