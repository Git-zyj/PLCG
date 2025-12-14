#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3003996392U;
_Bool var_2 = (_Bool)0;
int var_7 = -1268004414;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)101;
long long int var_16 = -1669494689521777112LL;
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
