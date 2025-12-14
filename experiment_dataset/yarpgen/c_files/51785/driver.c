#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 11697357354735068947ULL;
short var_10 = (short)-3317;
long long int var_12 = 6159229949861756781LL;
unsigned long long int var_13 = 8383005662167294762ULL;
long long int var_14 = -7555721509478325727LL;
long long int var_18 = -5012767596374058399LL;
signed char var_19 = (signed char)30;
int zero = 0;
unsigned int var_20 = 1852723430U;
unsigned long long int var_21 = 14656997820520900909ULL;
void init() {
}

void checksum() {
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
