#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
short var_3 = (short)9353;
unsigned long long int var_4 = 4995457990536011985ULL;
unsigned long long int var_5 = 8281842935698958773ULL;
short var_6 = (short)6393;
short var_9 = (short)-13408;
int zero = 0;
signed char var_10 = (signed char)-114;
int var_11 = 504130878;
unsigned long long int var_12 = 16760358520736420093ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
