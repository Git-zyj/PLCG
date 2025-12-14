#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11498583861034959238ULL;
unsigned char var_6 = (unsigned char)131;
signed char var_7 = (signed char)-81;
unsigned short var_8 = (unsigned short)24256;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
short var_11 = (short)-24853;
long long int var_12 = -7630479612152232199LL;
unsigned short var_13 = (unsigned short)9631;
long long int var_14 = 161813412780973372LL;
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
