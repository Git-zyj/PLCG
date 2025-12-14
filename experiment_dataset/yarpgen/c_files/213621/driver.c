#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2871;
unsigned long long int var_3 = 5065863620859905919ULL;
signed char var_5 = (signed char)108;
long long int var_6 = -7807357816789245018LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)57692;
unsigned char var_11 = (unsigned char)52;
short var_14 = (short)-14205;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
unsigned char var_16 = (unsigned char)10;
unsigned short var_17 = (unsigned short)54365;
int var_18 = 898206013;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
