#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1824649996;
short var_5 = (short)-14767;
unsigned long long int var_6 = 13302818209644126917ULL;
int var_10 = 550297793;
int zero = 0;
unsigned long long int var_13 = 4407606019333140274ULL;
unsigned long long int var_14 = 400570695454844055ULL;
short var_15 = (short)-20801;
_Bool var_16 = (_Bool)1;
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
