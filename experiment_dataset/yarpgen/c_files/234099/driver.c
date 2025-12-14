#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3303374936597836460LL;
unsigned int var_6 = 760231871U;
long long int var_8 = 1013437734855239651LL;
long long int var_12 = 9117500791747203750LL;
int var_13 = -733739973;
signed char var_14 = (signed char)111;
unsigned int var_15 = 1863572446U;
int zero = 0;
short var_16 = (short)-26667;
unsigned int var_17 = 670777889U;
int var_18 = 548005173;
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
