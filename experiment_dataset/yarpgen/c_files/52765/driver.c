#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3866208692U;
unsigned long long int var_3 = 13915064452714157997ULL;
int var_6 = -1078227283;
signed char var_7 = (signed char)87;
unsigned short var_8 = (unsigned short)2452;
short var_11 = (short)-26661;
int zero = 0;
long long int var_14 = -2184065706233313933LL;
unsigned char var_15 = (unsigned char)83;
unsigned char var_16 = (unsigned char)155;
signed char var_17 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
