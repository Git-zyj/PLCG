#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4451769385493407602LL;
short var_4 = (short)3494;
unsigned int var_11 = 2793628914U;
long long int var_13 = -5917000670627816333LL;
unsigned long long int var_15 = 550071490793762271ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)64227;
unsigned long long int var_17 = 3590126432920008755ULL;
unsigned short var_18 = (unsigned short)40370;
void init() {
}

void checksum() {
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
