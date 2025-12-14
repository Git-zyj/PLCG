#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1710210487;
unsigned long long int var_9 = 6343511257688204167ULL;
unsigned int var_13 = 3013686670U;
int zero = 0;
long long int var_17 = 2089542556625101922LL;
unsigned long long int var_18 = 10547632993229565614ULL;
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
