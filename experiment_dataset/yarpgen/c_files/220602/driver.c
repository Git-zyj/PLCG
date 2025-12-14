#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2239;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2288723126349138418ULL;
unsigned char var_7 = (unsigned char)230;
unsigned long long int var_10 = 2110520584678324055ULL;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
signed char var_16 = (signed char)-98;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3961099513U;
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
