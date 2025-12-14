#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2578441832U;
short var_1 = (short)-32223;
short var_3 = (short)28695;
unsigned long long int var_4 = 17849341442091739210ULL;
int zero = 0;
unsigned int var_10 = 3378140355U;
long long int var_11 = -8063009421556006118LL;
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
