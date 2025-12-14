#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14988696343195405231ULL;
unsigned long long int var_9 = 11605028604814844761ULL;
unsigned char var_10 = (unsigned char)131;
unsigned char var_12 = (unsigned char)82;
int zero = 0;
unsigned char var_13 = (unsigned char)50;
int var_14 = 800079786;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
