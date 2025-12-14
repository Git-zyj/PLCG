#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned int var_1 = 1799827621U;
unsigned char var_2 = (unsigned char)181;
unsigned short var_4 = (unsigned short)47319;
int zero = 0;
unsigned long long int var_11 = 1262016736127181328ULL;
unsigned long long int var_12 = 1640123948104043530ULL;
signed char var_13 = (signed char)84;
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
