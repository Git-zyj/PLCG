#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1565176032;
long long int var_1 = 3301524281411745151LL;
int var_2 = -206711934;
short var_3 = (short)-17422;
short var_4 = (short)-28909;
int var_6 = 1967061482;
long long int var_7 = -8557647208110031683LL;
long long int var_9 = -6662503684365676099LL;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
unsigned short var_11 = (unsigned short)42051;
unsigned char var_12 = (unsigned char)123;
long long int var_13 = 895049938970676085LL;
unsigned short var_14 = (unsigned short)11480;
unsigned short var_15 = (unsigned short)36640;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
