#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14501719523544195833ULL;
long long int var_2 = -3836860892114924531LL;
unsigned int var_4 = 648830673U;
signed char var_8 = (signed char)45;
int var_9 = -1685179054;
int zero = 0;
unsigned long long int var_12 = 6496975743993728277ULL;
unsigned short var_13 = (unsigned short)4391;
unsigned char var_14 = (unsigned char)10;
signed char var_15 = (signed char)40;
unsigned char var_16 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
