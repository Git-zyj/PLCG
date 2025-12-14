#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned long long int var_5 = 18306916153043309095ULL;
unsigned short var_6 = (unsigned short)24295;
unsigned int var_7 = 2221620400U;
int var_9 = -1592454647;
long long int var_10 = 8489119272692727423LL;
int zero = 0;
unsigned int var_16 = 2357698830U;
long long int var_17 = -6649025232783534468LL;
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
