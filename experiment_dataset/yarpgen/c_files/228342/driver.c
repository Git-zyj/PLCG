#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16762393615050765766ULL;
unsigned short var_3 = (unsigned short)8965;
unsigned short var_5 = (unsigned short)1604;
unsigned long long int var_7 = 3560543330904702212ULL;
unsigned long long int var_9 = 3971921842568163796ULL;
unsigned int var_11 = 1376610547U;
int zero = 0;
long long int var_12 = 7815314728873239177LL;
unsigned int var_13 = 1446374035U;
unsigned long long int var_14 = 3769630382431037809ULL;
unsigned short var_15 = (unsigned short)13552;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
