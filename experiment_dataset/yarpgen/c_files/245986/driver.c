#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
int var_2 = -1279564940;
unsigned char var_3 = (unsigned char)57;
unsigned long long int var_4 = 10906018387350187281ULL;
int var_6 = -863104959;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)57127;
unsigned int var_9 = 2116205017U;
signed char var_11 = (signed char)-62;
signed char var_12 = (signed char)50;
unsigned long long int var_13 = 12560481477289847430ULL;
int zero = 0;
unsigned int var_14 = 2837439302U;
signed char var_15 = (signed char)77;
short var_16 = (short)12646;
unsigned char var_17 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
