#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)169;
signed char var_7 = (signed char)33;
unsigned char var_9 = (unsigned char)13;
int zero = 0;
long long int var_14 = -6181284829497327521LL;
unsigned long long int var_15 = 18412582324152443829ULL;
unsigned long long int var_16 = 8348829946545276386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
