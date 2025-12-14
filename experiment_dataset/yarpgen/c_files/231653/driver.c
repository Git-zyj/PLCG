#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8799619756982274991LL;
unsigned long long int var_4 = 13087133365480036973ULL;
int var_5 = -475872658;
unsigned long long int var_9 = 4875567848045389136ULL;
int var_11 = 1983954310;
int zero = 0;
unsigned short var_12 = (unsigned short)1160;
unsigned long long int var_13 = 1311293927727512543ULL;
unsigned short var_14 = (unsigned short)54029;
unsigned int var_15 = 423629905U;
void init() {
}

void checksum() {
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
