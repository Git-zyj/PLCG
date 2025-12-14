#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)194;
unsigned int var_4 = 1411717154U;
short var_6 = (short)3371;
short var_11 = (short)-9931;
int zero = 0;
unsigned char var_14 = (unsigned char)235;
unsigned char var_15 = (unsigned char)1;
long long int var_16 = 1973666234590680863LL;
signed char var_17 = (signed char)-21;
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
