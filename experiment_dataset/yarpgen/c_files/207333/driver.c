#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7911974574629105548LL;
unsigned char var_2 = (unsigned char)87;
unsigned long long int var_3 = 12934948293270380274ULL;
unsigned short var_4 = (unsigned short)53374;
unsigned short var_7 = (unsigned short)2564;
unsigned short var_8 = (unsigned short)36616;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)186;
long long int var_12 = -2040156331408973089LL;
int zero = 0;
long long int var_13 = -5903204221954244284LL;
short var_14 = (short)-3674;
signed char var_15 = (signed char)-106;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
