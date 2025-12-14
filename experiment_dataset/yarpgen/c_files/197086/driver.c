#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9228006261607343020ULL;
unsigned char var_1 = (unsigned char)127;
unsigned long long int var_2 = 12085410062890898223ULL;
unsigned char var_4 = (unsigned char)144;
int zero = 0;
unsigned long long int var_11 = 10343356467606710969ULL;
unsigned char var_12 = (unsigned char)234;
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
