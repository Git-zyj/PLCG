#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned char var_4 = (unsigned char)120;
unsigned char var_5 = (unsigned char)221;
unsigned short var_8 = (unsigned short)50666;
unsigned long long int var_9 = 3607318479590405897ULL;
short var_11 = (short)-12404;
short var_12 = (short)-30666;
unsigned int var_14 = 1962783044U;
int zero = 0;
short var_16 = (short)-2877;
unsigned int var_17 = 2225866799U;
void init() {
}

void checksum() {
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
