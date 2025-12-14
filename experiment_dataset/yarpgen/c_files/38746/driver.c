#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1669433952U;
int var_5 = 1075843548;
int var_8 = -1894011937;
unsigned long long int var_10 = 11135196665422352790ULL;
unsigned long long int var_12 = 11365911391399435778ULL;
int zero = 0;
int var_14 = 2082392335;
int var_15 = -1330874587;
unsigned int var_16 = 403283919U;
int var_17 = 1170830533;
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
