#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
unsigned long long int var_3 = 10916061689815165424ULL;
long long int var_4 = 1342479771513462587LL;
unsigned short var_8 = (unsigned short)3011;
int var_10 = -518605545;
unsigned char var_11 = (unsigned char)102;
int zero = 0;
unsigned int var_13 = 3454049479U;
unsigned int var_14 = 4069245692U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
