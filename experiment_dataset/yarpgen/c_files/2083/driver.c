#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14562;
signed char var_2 = (signed char)44;
unsigned int var_3 = 4274658284U;
unsigned char var_11 = (unsigned char)249;
int var_12 = 1279483959;
int zero = 0;
unsigned long long int var_15 = 16131962474164566228ULL;
long long int var_16 = 8766537367671196385LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
