#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
signed char var_3 = (signed char)-13;
signed char var_5 = (signed char)-11;
signed char var_6 = (signed char)21;
signed char var_7 = (signed char)-36;
signed char var_11 = (signed char)-61;
int zero = 0;
signed char var_14 = (signed char)62;
signed char var_15 = (signed char)-27;
signed char var_16 = (signed char)-118;
void init() {
}

void checksum() {
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
