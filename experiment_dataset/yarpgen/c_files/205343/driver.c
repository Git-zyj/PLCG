#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 812053284;
unsigned short var_2 = (unsigned short)55720;
unsigned int var_3 = 19503596U;
signed char var_6 = (signed char)-30;
unsigned long long int var_10 = 8433014444532624402ULL;
long long int var_16 = -1636820988146234217LL;
int zero = 0;
short var_17 = (short)21052;
unsigned char var_18 = (unsigned char)175;
void init() {
}

void checksum() {
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
