#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15370346825581226480ULL;
unsigned long long int var_5 = 3440587967074354332ULL;
long long int var_6 = -4414102347461653656LL;
short var_8 = (short)-911;
int zero = 0;
unsigned short var_12 = (unsigned short)11325;
long long int var_13 = 1450662560781602910LL;
void init() {
}

void checksum() {
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
