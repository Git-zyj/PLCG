#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4136;
unsigned long long int var_5 = 1449091388622394441ULL;
unsigned long long int var_13 = 659495705257635425ULL;
short var_16 = (short)-1197;
int zero = 0;
short var_19 = (short)12507;
unsigned long long int var_20 = 6456085320189370452ULL;
unsigned long long int var_21 = 3218460468311260895ULL;
void init() {
}

void checksum() {
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
