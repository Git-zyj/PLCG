#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1038857750431291501LL;
long long int var_3 = 2177933685710619474LL;
int zero = 0;
long long int var_14 = 4226757448572720966LL;
long long int var_15 = 5516268527799488855LL;
long long int var_16 = 4004400443299547183LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
