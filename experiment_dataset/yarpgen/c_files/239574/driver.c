#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50239;
unsigned int var_3 = 529201713U;
unsigned int var_5 = 912593488U;
unsigned short var_6 = (unsigned short)23707;
unsigned char var_7 = (unsigned char)144;
_Bool var_8 = (_Bool)1;
short var_9 = (short)28855;
int zero = 0;
unsigned char var_10 = (unsigned char)94;
unsigned long long int var_11 = 16335572386290197321ULL;
signed char var_12 = (signed char)-107;
unsigned char var_13 = (unsigned char)167;
long long int var_14 = 2244476895357385339LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
