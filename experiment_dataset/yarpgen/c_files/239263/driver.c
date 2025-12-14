#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16;
short var_2 = (short)-13337;
int var_8 = 1045704917;
unsigned int var_9 = 2045032117U;
int zero = 0;
long long int var_12 = 4172764011521566359LL;
unsigned long long int var_13 = 1551649162023504791ULL;
int var_14 = -969635874;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
