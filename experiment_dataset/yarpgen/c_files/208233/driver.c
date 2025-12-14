#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
short var_3 = (short)20394;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-23123;
int var_9 = 1058339533;
unsigned int var_10 = 165412414U;
unsigned long long int var_11 = 3768882454417015686ULL;
signed char var_12 = (signed char)15;
int var_13 = 1370927935;
short var_14 = (short)14751;
short var_15 = (short)16142;
long long int var_16 = 8079289531958951802LL;
int var_17 = -299378253;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)32020;
int var_22 = 1978108353;
unsigned int var_23 = 193984574U;
short var_24 = (short)15530;
long long int var_25 = 2083027222482491900LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
