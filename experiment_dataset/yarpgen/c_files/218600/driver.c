#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9115423179623628933ULL;
int var_1 = -574115139;
int var_2 = 1850032927;
short var_3 = (short)7312;
_Bool var_4 = (_Bool)0;
long long int var_5 = 3131419153040763023LL;
unsigned char var_6 = (unsigned char)174;
unsigned long long int var_10 = 11662859880957364661ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)116;
unsigned short var_12 = (unsigned short)1971;
signed char var_13 = (signed char)-116;
unsigned int var_14 = 413134799U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
