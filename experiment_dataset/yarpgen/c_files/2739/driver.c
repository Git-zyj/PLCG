#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19772;
long long int var_1 = -7525127905925697563LL;
signed char var_7 = (signed char)46;
unsigned char var_8 = (unsigned char)223;
unsigned short var_13 = (unsigned short)1759;
int zero = 0;
unsigned char var_16 = (unsigned char)151;
unsigned int var_17 = 2872586719U;
int var_18 = -2110628232;
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
