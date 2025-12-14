#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6994078799525556618ULL;
unsigned long long int var_6 = 18380743807101097298ULL;
unsigned long long int var_7 = 6955978466423630437ULL;
unsigned long long int var_10 = 13628446575667450296ULL;
int zero = 0;
int var_11 = 364005544;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
