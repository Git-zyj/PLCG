#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -48317308;
unsigned long long int var_5 = 6859595954811213744ULL;
unsigned long long int var_9 = 3978677690969164296ULL;
int zero = 0;
long long int var_19 = -469586286991626628LL;
unsigned short var_20 = (unsigned short)57422;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
