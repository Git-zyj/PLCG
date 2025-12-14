#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1393932236436180233ULL;
short var_8 = (short)-18548;
unsigned int var_12 = 2456490672U;
unsigned long long int var_13 = 5344429964082719882ULL;
signed char var_14 = (signed char)112;
int zero = 0;
unsigned int var_16 = 3092524152U;
unsigned long long int var_17 = 16816921533954392097ULL;
signed char var_18 = (signed char)-33;
void init() {
}

void checksum() {
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
