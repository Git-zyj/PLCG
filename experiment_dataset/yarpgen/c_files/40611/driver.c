#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3746786741U;
unsigned int var_13 = 3942384651U;
int zero = 0;
unsigned long long int var_16 = 11107901470431177227ULL;
unsigned short var_17 = (unsigned short)61153;
unsigned char var_18 = (unsigned char)245;
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
