#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
signed char var_3 = (signed char)-50;
signed char var_5 = (signed char)12;
unsigned char var_10 = (unsigned char)174;
int var_15 = -1951616116;
signed char var_16 = (signed char)-36;
int zero = 0;
signed char var_18 = (signed char)-124;
signed char var_19 = (signed char)-8;
int var_20 = 1655994636;
int var_21 = 812076430;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
