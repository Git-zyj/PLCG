#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46644;
unsigned char var_2 = (unsigned char)13;
unsigned short var_3 = (unsigned short)3827;
int var_14 = 153125501;
signed char var_16 = (signed char)-96;
signed char var_17 = (signed char)33;
long long int var_18 = -5716938114460293572LL;
signed char var_19 = (signed char)-71;
int zero = 0;
long long int var_20 = -1630469679958523021LL;
unsigned char var_21 = (unsigned char)30;
signed char var_22 = (signed char)-36;
unsigned short var_23 = (unsigned short)47195;
unsigned short var_24 = (unsigned short)41519;
unsigned int var_25 = 3649250908U;
unsigned short var_26 = (unsigned short)28604;
int arr_3 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1174857533;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)13881;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
