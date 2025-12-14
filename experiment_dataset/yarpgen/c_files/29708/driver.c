#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13850724114180660072ULL;
int var_3 = -328367274;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)71;
int zero = 0;
long long int var_15 = -5343116161765824251LL;
int var_16 = -993375387;
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
