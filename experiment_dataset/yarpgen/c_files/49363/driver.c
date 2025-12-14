#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7456;
unsigned long long int var_2 = 8905366696792776079ULL;
long long int var_4 = 470582234674286521LL;
short var_5 = (short)-30979;
unsigned long long int var_7 = 16820043600786853150ULL;
short var_8 = (short)-22217;
long long int var_9 = -710047716743438397LL;
short var_10 = (short)19551;
int zero = 0;
long long int var_11 = -3140260460713455617LL;
int var_12 = -1358737363;
int var_13 = 333837279;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
