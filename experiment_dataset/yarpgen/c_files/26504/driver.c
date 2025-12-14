#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1766868291;
signed char var_14 = (signed char)1;
_Bool var_15 = (_Bool)1;
int var_17 = 1713428229;
int zero = 0;
unsigned long long int var_18 = 2918421920566274143ULL;
int var_19 = 970210625;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
