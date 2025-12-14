#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -581403187;
unsigned char var_5 = (unsigned char)123;
unsigned int var_10 = 1301308268U;
unsigned int var_11 = 2277500489U;
unsigned int var_12 = 2264330423U;
short var_15 = (short)19995;
int zero = 0;
unsigned short var_20 = (unsigned short)56709;
unsigned int var_21 = 706396852U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
