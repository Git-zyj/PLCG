#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1947062848;
unsigned char var_5 = (unsigned char)8;
short var_10 = (short)-18051;
int zero = 0;
unsigned long long int var_13 = 10616605753036097158ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9966624345919056243ULL;
short var_16 = (short)-18827;
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
