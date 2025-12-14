#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3458501362U;
int var_3 = -834338857;
unsigned int var_4 = 2739513197U;
unsigned int var_10 = 2503611231U;
unsigned int var_12 = 1365516471U;
int zero = 0;
long long int var_13 = 6879496703348025948LL;
short var_14 = (short)-4360;
unsigned char var_15 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
