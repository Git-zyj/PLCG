#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1572069656;
int var_7 = 944185450;
unsigned long long int var_12 = 5308795165856328068ULL;
int zero = 0;
unsigned long long int var_16 = 2525957753782675679ULL;
int var_17 = -1762885513;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
