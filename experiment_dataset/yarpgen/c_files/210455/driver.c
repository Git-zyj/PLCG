#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25030;
long long int var_2 = 6601574159226631812LL;
int var_3 = 2072324422;
signed char var_4 = (signed char)-112;
long long int var_6 = -2142944142313526849LL;
unsigned long long int var_7 = 6828731004570954286ULL;
unsigned int var_8 = 16993873U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-92;
unsigned long long int var_12 = 12379088982274321917ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
