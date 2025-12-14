#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2788462357U;
unsigned long long int var_6 = 17320813406655804138ULL;
int zero = 0;
unsigned long long int var_15 = 8636292251747768804ULL;
unsigned short var_16 = (unsigned short)3270;
unsigned long long int var_17 = 12265136337599888201ULL;
unsigned short var_18 = (unsigned short)28826;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
