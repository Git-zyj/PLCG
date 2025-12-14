#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)30;
short var_10 = (short)16683;
signed char var_11 = (signed char)87;
long long int var_12 = -2178734964576743444LL;
unsigned short var_15 = (unsigned short)21669;
int zero = 0;
int var_19 = 997627562;
unsigned long long int var_20 = 12746553364873237236ULL;
int var_21 = 340530953;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
