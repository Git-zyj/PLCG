#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8060729488004900053LL;
int var_8 = -1571548256;
unsigned int var_10 = 157217321U;
int zero = 0;
signed char var_11 = (signed char)-101;
unsigned short var_12 = (unsigned short)17557;
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
