#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 7546793612645919343LL;
long long int var_14 = 8105534100004120658LL;
signed char var_16 = (signed char)-121;
int zero = 0;
int var_18 = -718027922;
signed char var_19 = (signed char)-93;
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
