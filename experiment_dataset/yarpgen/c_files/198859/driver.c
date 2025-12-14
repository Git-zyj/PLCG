#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16076;
unsigned long long int var_2 = 15670055841750453695ULL;
unsigned int var_3 = 4287066725U;
signed char var_8 = (signed char)45;
int zero = 0;
short var_14 = (short)-11077;
unsigned char var_15 = (unsigned char)94;
unsigned long long int var_16 = 10417315868658301479ULL;
unsigned long long int var_17 = 6194754912465638023ULL;
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
