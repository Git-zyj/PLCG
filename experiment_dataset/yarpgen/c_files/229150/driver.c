#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1876370;
unsigned char var_3 = (unsigned char)196;
unsigned int var_9 = 3864015599U;
unsigned int var_13 = 3298446408U;
int zero = 0;
unsigned int var_15 = 2164457134U;
long long int var_16 = -4041503914465617177LL;
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
