#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16476715342412081766ULL;
unsigned int var_3 = 3017576181U;
unsigned int var_5 = 3957241668U;
long long int var_6 = -4745016896103186159LL;
long long int var_7 = 8369640222875636489LL;
int zero = 0;
unsigned long long int var_10 = 1153926899619655044ULL;
unsigned long long int var_11 = 6911542290508189575ULL;
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
