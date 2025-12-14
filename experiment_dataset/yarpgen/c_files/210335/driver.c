#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 917605651U;
unsigned int var_3 = 344848070U;
short var_5 = (short)-22838;
signed char var_6 = (signed char)-32;
unsigned int var_9 = 455029569U;
int zero = 0;
long long int var_11 = -5186541777636151962LL;
unsigned short var_12 = (unsigned short)35141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
