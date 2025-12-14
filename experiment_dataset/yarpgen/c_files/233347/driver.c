#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55327;
int var_4 = 307865167;
int var_7 = -467530126;
unsigned short var_10 = (unsigned short)58906;
int var_13 = 401529341;
int var_14 = -1507809894;
int zero = 0;
unsigned long long int var_20 = 6668643367617037608ULL;
unsigned int var_21 = 833109513U;
unsigned int var_22 = 1762477182U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
