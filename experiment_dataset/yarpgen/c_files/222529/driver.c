#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4053221591584587160LL;
long long int var_7 = 3881556302140950037LL;
unsigned int var_10 = 2556962262U;
int var_12 = -127290494;
int var_13 = -799077829;
unsigned long long int var_14 = 9476813773687643467ULL;
int var_15 = -2015019908;
int zero = 0;
long long int var_16 = 719088593229301065LL;
unsigned long long int var_17 = 15245448291106960541ULL;
unsigned short var_18 = (unsigned short)18019;
long long int var_19 = -4925456096535405767LL;
short var_20 = (short)-4539;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
