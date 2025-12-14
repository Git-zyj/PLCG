#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1692590664894164553ULL;
unsigned long long int var_8 = 17987566162716646401ULL;
unsigned long long int var_13 = 17774395062961984002ULL;
int zero = 0;
unsigned long long int var_15 = 12444197574682047901ULL;
unsigned long long int var_16 = 8392947701827182695ULL;
unsigned long long int var_17 = 5097931889200778361ULL;
unsigned long long int var_18 = 4618251747471094161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
