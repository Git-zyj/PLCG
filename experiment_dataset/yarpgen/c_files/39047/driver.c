#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned char var_1 = (unsigned char)195;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
unsigned short var_18 = (unsigned short)58482;
long long int var_19 = 174079895112758671LL;
unsigned long long int var_20 = 12977326196558518172ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
