#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3824031533042012254LL;
unsigned long long int var_4 = 2904044138718821487ULL;
int var_6 = -818805920;
unsigned long long int var_7 = 58334173297071693ULL;
int var_14 = 1857389192;
int zero = 0;
signed char var_15 = (signed char)39;
int var_16 = -2143979258;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5607276796150021059LL;
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
