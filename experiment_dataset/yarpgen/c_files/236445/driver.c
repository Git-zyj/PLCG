#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)173;
int var_3 = 1234329236;
long long int var_5 = 7014348315454751717LL;
unsigned char var_6 = (unsigned char)40;
unsigned long long int var_7 = 12683541896390463377ULL;
signed char var_12 = (signed char)-28;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
int var_16 = -64970976;
int var_17 = -1098806899;
signed char var_18 = (signed char)-53;
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
