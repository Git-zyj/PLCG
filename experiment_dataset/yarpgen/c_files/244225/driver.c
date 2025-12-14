#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)123;
unsigned long long int var_10 = 16089693072613069394ULL;
unsigned int var_11 = 2647781882U;
int var_14 = 407650157;
long long int var_15 = 7371355367414822465LL;
int zero = 0;
unsigned char var_16 = (unsigned char)123;
unsigned char var_17 = (unsigned char)32;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
