#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)19493;
unsigned int var_12 = 691033635U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 10294263396456779205ULL;
unsigned int var_18 = 3075138199U;
void init() {
}

void checksum() {
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
