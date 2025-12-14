#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_2 = (signed char)-22;
unsigned int var_6 = 4110430407U;
int var_8 = -1704994418;
int zero = 0;
unsigned long long int var_11 = 15371783985383692674ULL;
unsigned char var_12 = (unsigned char)18;
unsigned int var_13 = 1945763969U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
