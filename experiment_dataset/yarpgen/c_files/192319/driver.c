#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1924612313142298341ULL;
short var_3 = (short)-21071;
short var_6 = (short)-16709;
unsigned char var_8 = (unsigned char)87;
long long int var_10 = -5430971220167023748LL;
int zero = 0;
short var_13 = (short)-18170;
short var_14 = (short)8691;
signed char var_15 = (signed char)111;
unsigned short var_16 = (unsigned short)12237;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
