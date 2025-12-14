#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7350871920761916549LL;
long long int var_3 = 7986193946912391457LL;
unsigned long long int var_7 = 18054673179594639664ULL;
int zero = 0;
unsigned int var_13 = 112826151U;
long long int var_14 = -2450271260267740322LL;
unsigned int var_15 = 1715027672U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
