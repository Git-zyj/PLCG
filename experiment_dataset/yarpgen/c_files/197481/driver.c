#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
short var_4 = (short)1994;
int var_7 = 360528283;
long long int var_8 = -2158287769336492785LL;
signed char var_10 = (signed char)65;
unsigned char var_11 = (unsigned char)159;
signed char var_12 = (signed char)-62;
int zero = 0;
unsigned char var_14 = (unsigned char)244;
unsigned char var_15 = (unsigned char)19;
signed char var_16 = (signed char)3;
void init() {
}

void checksum() {
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
