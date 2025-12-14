#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-99;
signed char var_4 = (signed char)-110;
signed char var_5 = (signed char)67;
signed char var_7 = (signed char)-93;
signed char var_8 = (signed char)64;
signed char var_11 = (signed char)-88;
signed char var_13 = (signed char)-92;
signed char var_14 = (signed char)119;
int zero = 0;
signed char var_15 = (signed char)-114;
signed char var_16 = (signed char)-36;
signed char var_17 = (signed char)-66;
signed char var_18 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
