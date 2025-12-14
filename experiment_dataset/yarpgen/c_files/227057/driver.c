#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21826;
int var_6 = 1654797372;
unsigned short var_7 = (unsigned short)55332;
long long int var_8 = 3728648120195369392LL;
unsigned long long int var_10 = 5396431786541393494ULL;
unsigned short var_12 = (unsigned short)8104;
int zero = 0;
unsigned short var_19 = (unsigned short)54434;
unsigned short var_20 = (unsigned short)44245;
unsigned short var_21 = (unsigned short)64780;
unsigned short var_22 = (unsigned short)31392;
unsigned long long int var_23 = 7751268437368741194ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
