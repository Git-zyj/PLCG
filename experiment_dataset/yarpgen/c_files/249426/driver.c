#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1830924015U;
int var_3 = 786547555;
long long int var_5 = -3058272693139508362LL;
unsigned int var_8 = 405099550U;
unsigned long long int var_9 = 18021971327883471308ULL;
int zero = 0;
long long int var_10 = 4758906040135057688LL;
unsigned short var_11 = (unsigned short)16831;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
