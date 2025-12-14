#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2200261282U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 11966998812077769366ULL;
unsigned long long int var_17 = 13478412502350087327ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17059758572017903980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
