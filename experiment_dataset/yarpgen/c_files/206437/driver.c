#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -4105535289727843443LL;
long long int var_7 = 4806273941446393064LL;
unsigned int var_9 = 2164505675U;
int var_11 = -1514330801;
int zero = 0;
unsigned long long int var_15 = 756985407734683011ULL;
unsigned char var_16 = (unsigned char)22;
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
