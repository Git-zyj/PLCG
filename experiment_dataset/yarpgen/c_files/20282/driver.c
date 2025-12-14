#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1213507942;
int var_3 = -749614714;
unsigned long long int var_7 = 4973221985193592408ULL;
unsigned long long int var_10 = 11223831027019398071ULL;
int zero = 0;
unsigned long long int var_18 = 12726216264470932401ULL;
int var_19 = -2047285494;
unsigned long long int var_20 = 10724080736671369005ULL;
int var_21 = -1053665840;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
