#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32366;
int var_4 = -1802408355;
unsigned int var_5 = 797416590U;
unsigned int var_6 = 2580829531U;
long long int var_10 = 8153802822512118667LL;
unsigned long long int var_13 = 16483818754314440898ULL;
int zero = 0;
long long int var_14 = 2063143887793168634LL;
int var_15 = -660658136;
unsigned int var_16 = 263803958U;
unsigned int var_17 = 173780338U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
