#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16246;
unsigned int var_2 = 3283150589U;
unsigned long long int var_3 = 6394993423108196617ULL;
unsigned char var_10 = (unsigned char)30;
int zero = 0;
int var_11 = -73499257;
unsigned char var_12 = (unsigned char)46;
void init() {
}

void checksum() {
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
