#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned long long int var_4 = 9902039334175123952ULL;
short var_5 = (short)9103;
signed char var_7 = (signed char)63;
short var_8 = (short)18157;
short var_9 = (short)2780;
int zero = 0;
unsigned long long int var_10 = 1026090853092652807ULL;
unsigned long long int var_11 = 264161210719685460ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
