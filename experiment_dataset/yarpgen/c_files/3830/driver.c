#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned short var_4 = (unsigned short)49933;
unsigned long long int var_10 = 10630172972879988275ULL;
unsigned char var_14 = (unsigned char)2;
unsigned long long int var_15 = 211096403421726157ULL;
int var_16 = -460793210;
unsigned short var_19 = (unsigned short)61074;
int zero = 0;
unsigned long long int var_20 = 1454258053169222802ULL;
unsigned char var_21 = (unsigned char)61;
void init() {
}

void checksum() {
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
