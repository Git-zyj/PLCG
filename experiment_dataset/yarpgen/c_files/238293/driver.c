#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2800216376U;
unsigned char var_2 = (unsigned char)184;
unsigned long long int var_6 = 1769563287579049172ULL;
short var_8 = (short)30192;
signed char var_12 = (signed char)77;
int zero = 0;
long long int var_20 = -6198168260796892936LL;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
