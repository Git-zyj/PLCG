#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 896208994U;
unsigned int var_6 = 3689120228U;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
unsigned int var_17 = 2449209961U;
unsigned char var_18 = (unsigned char)144;
int var_19 = -1494372157;
unsigned int var_20 = 987108207U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
