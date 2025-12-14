#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2182932502170447765LL;
long long int var_1 = 713695486877263043LL;
unsigned char var_4 = (unsigned char)160;
unsigned char var_5 = (unsigned char)165;
long long int var_7 = -7882069472277551287LL;
long long int var_9 = -7479934333788583722LL;
int zero = 0;
unsigned int var_10 = 1569109801U;
int var_11 = 2073364306;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
