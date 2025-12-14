#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2246686494U;
unsigned long long int var_3 = 8979706892388263551ULL;
unsigned long long int var_10 = 9118103017471861274ULL;
unsigned char var_11 = (unsigned char)105;
int var_13 = -1403614904;
int zero = 0;
unsigned char var_15 = (unsigned char)109;
unsigned long long int var_16 = 16317580177027443466ULL;
long long int var_17 = -5690421509420684324LL;
void init() {
}

void checksum() {
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
