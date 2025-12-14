#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46452;
unsigned char var_2 = (unsigned char)57;
short var_3 = (short)-13711;
long long int var_5 = -1228223088036946126LL;
unsigned short var_6 = (unsigned short)65023;
unsigned long long int var_7 = 18206621546449233692ULL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-2914;
int zero = 0;
unsigned short var_11 = (unsigned short)14999;
long long int var_12 = -1879887664108830459LL;
long long int var_13 = -4939196775762772389LL;
_Bool var_14 = (_Bool)0;
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
