#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53538;
unsigned char var_2 = (unsigned char)188;
int var_5 = 2051879232;
unsigned char var_12 = (unsigned char)192;
int var_18 = 1689242938;
int zero = 0;
int var_20 = -1829060402;
int var_21 = -1451629942;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
