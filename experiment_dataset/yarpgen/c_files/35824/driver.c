#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)19637;
short var_9 = (short)9054;
int zero = 0;
unsigned long long int var_10 = 13999881733023175399ULL;
unsigned char var_11 = (unsigned char)30;
unsigned char var_12 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
