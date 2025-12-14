#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
signed char var_1 = (signed char)87;
signed char var_3 = (signed char)-101;
long long int var_5 = -3353454018180190711LL;
long long int var_6 = 1155727858931951943LL;
signed char var_11 = (signed char)-122;
long long int var_13 = 5936761541269504664LL;
signed char var_14 = (signed char)63;
int zero = 0;
long long int var_16 = -1965186893133047394LL;
signed char var_17 = (signed char)-20;
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
