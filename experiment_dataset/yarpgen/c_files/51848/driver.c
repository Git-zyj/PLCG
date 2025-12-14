#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1372817962299272307ULL;
long long int var_3 = -1493660022190851951LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_7 = (short)1745;
unsigned char var_8 = (unsigned char)134;
unsigned char var_10 = (unsigned char)117;
int var_11 = -1941654665;
unsigned short var_13 = (unsigned short)23101;
unsigned long long int var_15 = 7861732889759991034ULL;
unsigned char var_16 = (unsigned char)228;
int zero = 0;
int var_17 = -1416943947;
long long int var_18 = -2474948922218576990LL;
unsigned short var_19 = (unsigned short)5276;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
