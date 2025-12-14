#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
signed char var_1 = (signed char)-120;
int var_3 = -368399475;
signed char var_5 = (signed char)41;
signed char var_8 = (signed char)16;
signed char var_11 = (signed char)-68;
int var_13 = 77146694;
signed char var_14 = (signed char)117;
int var_16 = 1884528258;
int var_17 = 1937953969;
short var_18 = (short)-27863;
int zero = 0;
long long int var_19 = 2584530294373188192LL;
signed char var_20 = (signed char)84;
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
