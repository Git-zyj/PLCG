#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13324;
signed char var_6 = (signed char)-125;
unsigned long long int var_7 = 17973668218465176791ULL;
unsigned short var_12 = (unsigned short)65482;
int zero = 0;
short var_13 = (short)8131;
signed char var_14 = (signed char)-75;
signed char var_15 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
