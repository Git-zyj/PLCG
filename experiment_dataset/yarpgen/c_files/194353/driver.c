#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
_Bool var_1 = (_Bool)0;
int var_4 = -1544884078;
unsigned char var_6 = (unsigned char)18;
long long int var_11 = 6644885011614043107LL;
int var_12 = -1387697539;
int zero = 0;
signed char var_20 = (signed char)-60;
unsigned char var_21 = (unsigned char)84;
unsigned char var_22 = (unsigned char)198;
unsigned short var_23 = (unsigned short)6903;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
