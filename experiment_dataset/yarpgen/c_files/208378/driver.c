#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4504;
unsigned short var_3 = (unsigned short)14783;
unsigned long long int var_5 = 17544249821428043168ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)27294;
unsigned int var_9 = 3093497125U;
short var_10 = (short)30570;
long long int var_11 = -7613196151547547165LL;
int var_12 = 904208013;
unsigned short var_13 = (unsigned short)42438;
unsigned char var_14 = (unsigned char)71;
int zero = 0;
unsigned short var_16 = (unsigned short)55688;
unsigned char var_17 = (unsigned char)221;
long long int var_18 = 155874352604899809LL;
int var_19 = 610575218;
short var_20 = (short)-29098;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
