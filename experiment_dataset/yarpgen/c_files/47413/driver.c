#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 474806236;
unsigned int var_5 = 444348624U;
unsigned short var_8 = (unsigned short)3365;
int zero = 0;
signed char var_11 = (signed char)-38;
unsigned long long int var_12 = 11647523411873876449ULL;
int var_13 = -1937587629;
signed char var_14 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
