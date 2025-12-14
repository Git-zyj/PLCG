#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6081918043342437886LL;
int var_5 = 1757301480;
unsigned char var_8 = (unsigned char)144;
unsigned char var_11 = (unsigned char)44;
unsigned char var_12 = (unsigned char)10;
short var_13 = (short)16317;
int zero = 0;
unsigned int var_14 = 3868885262U;
unsigned long long int var_15 = 48141000910351597ULL;
int var_16 = -1441059587;
signed char var_17 = (signed char)-113;
int var_18 = -34984170;
short arr_0 [23] ;
short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-6569;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-8973;
}

void checksum() {
    hash(&seed, var_14);
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
