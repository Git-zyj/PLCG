#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1796230149;
long long int var_4 = 3135880767283229905LL;
short var_5 = (short)-7736;
unsigned char var_11 = (unsigned char)103;
signed char var_12 = (signed char)-109;
int zero = 0;
signed char var_13 = (signed char)-15;
unsigned int var_14 = 1877836819U;
signed char var_15 = (signed char)-86;
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
