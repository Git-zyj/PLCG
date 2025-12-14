#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19898;
unsigned char var_5 = (unsigned char)233;
long long int var_14 = -9207690581532476962LL;
int zero = 0;
unsigned short var_18 = (unsigned short)35206;
unsigned long long int var_19 = 287819089005421983ULL;
int var_20 = 1972941503;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
