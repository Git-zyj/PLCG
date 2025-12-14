#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50030;
unsigned short var_2 = (unsigned short)40098;
unsigned short var_6 = (unsigned short)24318;
unsigned short var_9 = (unsigned short)8924;
short var_12 = (short)-13116;
unsigned int var_13 = 3307876625U;
int zero = 0;
unsigned long long int var_14 = 4888286096006440521ULL;
long long int var_15 = -2078868608158113019LL;
int var_16 = -333873825;
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
