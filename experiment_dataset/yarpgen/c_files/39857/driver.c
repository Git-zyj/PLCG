#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned int var_5 = 2991568989U;
unsigned short var_7 = (unsigned short)11612;
unsigned short var_8 = (unsigned short)37419;
int zero = 0;
long long int var_15 = -7044183649029122904LL;
int var_16 = -447618874;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
