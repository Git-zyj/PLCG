#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57915;
unsigned int var_7 = 3434645933U;
unsigned char var_10 = (unsigned char)107;
unsigned int var_11 = 742115306U;
int zero = 0;
unsigned int var_14 = 2370527428U;
unsigned char var_15 = (unsigned char)154;
int var_16 = 579543435;
unsigned int var_17 = 4197901340U;
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
