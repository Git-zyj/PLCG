#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1812639864U;
unsigned int var_2 = 3701408687U;
long long int var_4 = -7796503436273326718LL;
unsigned int var_5 = 2356775129U;
unsigned short var_6 = (unsigned short)51891;
short var_7 = (short)17977;
short var_11 = (short)-25239;
int zero = 0;
long long int var_14 = -1971079871682745812LL;
unsigned int var_15 = 769840122U;
void init() {
}

void checksum() {
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
