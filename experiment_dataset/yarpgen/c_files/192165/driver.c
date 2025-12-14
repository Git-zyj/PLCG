#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1146115870U;
unsigned int var_4 = 1544389650U;
unsigned int var_5 = 1922279730U;
unsigned int var_6 = 1947332121U;
unsigned int var_8 = 1472464767U;
unsigned int var_9 = 3172686876U;
int zero = 0;
unsigned int var_10 = 1439993497U;
unsigned int var_11 = 1441192012U;
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
