#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)167;
unsigned char var_5 = (unsigned char)38;
unsigned char var_6 = (unsigned char)168;
unsigned char var_7 = (unsigned char)157;
signed char var_10 = (signed char)-120;
int zero = 0;
int var_11 = -1673976701;
unsigned char var_12 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
