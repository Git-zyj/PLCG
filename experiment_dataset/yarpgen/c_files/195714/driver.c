#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13920014363883831364ULL;
unsigned int var_13 = 384268440U;
unsigned long long int var_15 = 5253081225653998856ULL;
unsigned long long int var_17 = 557667374889200842ULL;
int zero = 0;
unsigned long long int var_18 = 16487143498153966493ULL;
unsigned int var_19 = 1555178928U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
