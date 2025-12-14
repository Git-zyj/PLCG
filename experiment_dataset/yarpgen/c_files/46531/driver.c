#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46144;
long long int var_3 = 776258625134557584LL;
short var_4 = (short)1587;
unsigned int var_5 = 3319175735U;
long long int var_10 = -6958901992660848512LL;
int zero = 0;
short var_11 = (short)24000;
unsigned char var_12 = (unsigned char)181;
signed char var_13 = (signed char)-28;
signed char var_14 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
