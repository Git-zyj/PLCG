#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-61;
int var_9 = 1398867097;
int var_10 = -1737032784;
signed char var_11 = (signed char)107;
signed char var_12 = (signed char)-96;
int var_13 = -991086713;
signed char var_15 = (signed char)-111;
int zero = 0;
int var_18 = -950664887;
signed char var_19 = (signed char)-87;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
