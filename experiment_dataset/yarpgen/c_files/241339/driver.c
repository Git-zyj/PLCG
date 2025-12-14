#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1090727365512112757LL;
long long int var_6 = -7856197266465442512LL;
long long int var_7 = 3788996212880797211LL;
long long int var_10 = -1745371664887855432LL;
long long int var_12 = 7614046234927893892LL;
long long int var_13 = -7091612110646464448LL;
int zero = 0;
long long int var_14 = 5158252745148321397LL;
long long int var_15 = 9094449974663086025LL;
long long int var_16 = -3992062477585545227LL;
long long int var_17 = -1911537347620844230LL;
long long int var_18 = -4257596991754025541LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
