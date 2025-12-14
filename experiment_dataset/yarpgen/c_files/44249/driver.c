#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 116185639;
unsigned short var_10 = (unsigned short)63316;
unsigned char var_13 = (unsigned char)225;
int zero = 0;
unsigned int var_18 = 2553321454U;
unsigned short var_19 = (unsigned short)46565;
long long int var_20 = -5626264859486745723LL;
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
