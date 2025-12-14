#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)62;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_10 = 2131190228758785136LL;
int var_12 = -1718664683;
unsigned int var_14 = 1131074720U;
unsigned int var_15 = 4242281909U;
int zero = 0;
signed char var_16 = (signed char)31;
int var_17 = -230166420;
signed char var_18 = (signed char)87;
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
