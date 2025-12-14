#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2878;
short var_3 = (short)-31554;
unsigned long long int var_4 = 12000300966345666296ULL;
unsigned int var_8 = 191605878U;
unsigned long long int var_11 = 11830730167229713020ULL;
short var_12 = (short)22778;
int zero = 0;
unsigned int var_13 = 839668731U;
short var_14 = (short)10278;
unsigned int var_15 = 4221879528U;
short var_16 = (short)8304;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
