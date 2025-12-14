#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5510780225438924176LL;
long long int var_3 = 5877850853330374725LL;
unsigned long long int var_4 = 9731918911255460794ULL;
long long int var_6 = -1909938823172457588LL;
int var_11 = 1889515676;
int zero = 0;
unsigned int var_13 = 931902590U;
long long int var_14 = 8931991802342528289LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
