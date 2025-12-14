#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
long long int var_2 = -8381622456405602722LL;
int var_3 = -1893810114;
unsigned int var_5 = 2504920717U;
int var_7 = -1719313049;
unsigned char var_8 = (unsigned char)232;
int var_9 = 477781779;
int zero = 0;
unsigned short var_11 = (unsigned short)1270;
long long int var_12 = 2024088847761768229LL;
unsigned int var_13 = 3605809419U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
