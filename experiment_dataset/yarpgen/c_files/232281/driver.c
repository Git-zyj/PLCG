#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 108118880U;
unsigned long long int var_6 = 17933782460146528537ULL;
unsigned short var_7 = (unsigned short)11943;
signed char var_12 = (signed char)123;
signed char var_14 = (signed char)-69;
unsigned short var_18 = (unsigned short)36414;
int zero = 0;
short var_19 = (short)17571;
unsigned short var_20 = (unsigned short)36172;
void init() {
}

void checksum() {
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
