#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 194927221U;
unsigned short var_1 = (unsigned short)29341;
unsigned int var_3 = 1942209531U;
int var_6 = -1599601236;
unsigned int var_7 = 893776708U;
long long int var_10 = 7219815774970899079LL;
int zero = 0;
int var_15 = -1123934993;
long long int var_16 = 8717979619615894455LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
