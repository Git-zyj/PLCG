#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned long long int var_2 = 11979774348270654429ULL;
unsigned int var_5 = 1452479353U;
unsigned char var_7 = (unsigned char)140;
short var_12 = (short)16284;
short var_13 = (short)-19830;
int zero = 0;
short var_14 = (short)3088;
unsigned long long int var_15 = 2747502519793383286ULL;
void init() {
}

void checksum() {
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
