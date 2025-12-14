#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32380;
unsigned short var_4 = (unsigned short)19891;
int var_5 = -810896654;
int var_7 = -836000663;
unsigned long long int var_13 = 2308264760307943595ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)39;
signed char var_16 = (signed char)-32;
int var_18 = 1879994736;
int zero = 0;
unsigned char var_19 = (unsigned char)172;
unsigned long long int var_20 = 2725903007599473746ULL;
unsigned int var_21 = 3191706671U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
