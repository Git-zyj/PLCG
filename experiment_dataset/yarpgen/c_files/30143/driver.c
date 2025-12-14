#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 175565257526118337LL;
signed char var_1 = (signed char)-113;
unsigned long long int var_2 = 7871097510270642728ULL;
unsigned long long int var_5 = 15390483885043324754ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-14;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1120660067423610141LL;
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
