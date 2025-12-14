#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -125687170050428218LL;
int zero = 0;
unsigned long long int var_15 = 12434145164860070278ULL;
unsigned int var_16 = 3766464844U;
unsigned short var_17 = (unsigned short)57786;
long long int var_18 = 5030525140615954904LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
