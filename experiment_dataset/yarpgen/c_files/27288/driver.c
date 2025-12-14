#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3216161825913801137ULL;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
long long int var_15 = -5238005037864738582LL;
int var_16 = -581635768;
unsigned int var_17 = 3808463562U;
int var_18 = -1935676759;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
