#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
signed char var_5 = (signed char)-7;
signed char var_7 = (signed char)-25;
signed char var_8 = (signed char)-36;
signed char var_12 = (signed char)53;
signed char var_15 = (signed char)73;
int zero = 0;
signed char var_16 = (signed char)-18;
signed char var_17 = (signed char)-117;
void init() {
}

void checksum() {
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
