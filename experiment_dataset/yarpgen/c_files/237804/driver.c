#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5326368610918497049LL;
int var_5 = -185374364;
long long int var_11 = -6164135432330574983LL;
int zero = 0;
unsigned short var_16 = (unsigned short)34634;
unsigned long long int var_17 = 1503582959039107505ULL;
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
