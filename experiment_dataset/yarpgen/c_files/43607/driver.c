#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1400686133;
unsigned int var_9 = 2950909980U;
unsigned int var_10 = 1500585949U;
unsigned int var_13 = 4119323359U;
unsigned short var_14 = (unsigned short)35455;
int zero = 0;
unsigned int var_16 = 3316796112U;
short var_17 = (short)-187;
long long int var_18 = 7580182845402490398LL;
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
