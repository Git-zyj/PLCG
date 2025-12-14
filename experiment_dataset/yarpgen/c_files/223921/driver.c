#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -97031205800467284LL;
int var_4 = 1765391602;
int var_11 = 1783137435;
unsigned char var_12 = (unsigned char)246;
int zero = 0;
unsigned long long int var_20 = 1108579138334011860ULL;
long long int var_21 = -5248732668894084575LL;
unsigned long long int var_22 = 12553846807280174386ULL;
short var_23 = (short)-10690;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
