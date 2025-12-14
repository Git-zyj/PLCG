#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 17024197671778982044ULL;
unsigned long long int var_13 = 2069734303294873559ULL;
unsigned char var_14 = (unsigned char)103;
int zero = 0;
long long int var_16 = -2195854943154106057LL;
unsigned long long int var_17 = 9573572333625284390ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
