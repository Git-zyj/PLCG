#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9252645167697966686ULL;
int var_7 = -1854357431;
unsigned long long int var_9 = 3853193933145771528ULL;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
int var_11 = 559397418;
short var_12 = (short)22552;
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
