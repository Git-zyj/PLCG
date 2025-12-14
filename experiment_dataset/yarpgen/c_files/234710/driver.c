#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 199038888;
int var_4 = -275745716;
int var_8 = 293807802;
int var_13 = 76171968;
int var_14 = -712267388;
int zero = 0;
int var_15 = 1548689334;
int var_16 = -1585521524;
int var_17 = -65878305;
int var_18 = -683817888;
int var_19 = -1316267651;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
