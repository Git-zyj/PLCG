#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3113605118U;
unsigned int var_7 = 2710774118U;
unsigned int var_10 = 1003290389U;
int zero = 0;
unsigned char var_14 = (unsigned char)122;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)47;
unsigned char var_17 = (unsigned char)206;
unsigned int var_18 = 1192708730U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
