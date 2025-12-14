#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)44361;
long long int var_13 = 2354143815714110712LL;
int var_15 = -1780077755;
unsigned int var_16 = 616219582U;
int zero = 0;
unsigned char var_17 = (unsigned char)120;
int var_18 = -140347803;
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
