#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)36999;
unsigned int var_11 = 356766290U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 574328898U;
int zero = 0;
unsigned long long int var_14 = 16348889781960296606ULL;
int var_15 = 1351353665;
signed char var_16 = (signed char)5;
signed char var_17 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
