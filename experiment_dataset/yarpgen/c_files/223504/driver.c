#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
short var_2 = (short)-24532;
long long int var_3 = -6557359622657555629LL;
unsigned short var_4 = (unsigned short)32452;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)26658;
unsigned char var_8 = (unsigned char)229;
signed char var_9 = (signed char)-59;
unsigned long long int var_10 = 16334332980105055839ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = 7959081756179113828LL;
long long int var_16 = -2292579258165731995LL;
unsigned short var_17 = (unsigned short)24378;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
