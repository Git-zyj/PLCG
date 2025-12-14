#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1551347387U;
short var_4 = (short)25176;
signed char var_5 = (signed char)42;
long long int var_6 = 6591070305290610510LL;
unsigned char var_8 = (unsigned char)94;
long long int var_10 = 2141338003711124045LL;
int zero = 0;
unsigned long long int var_11 = 1330809822057067132ULL;
unsigned int var_12 = 1240707884U;
short var_13 = (short)11968;
int var_14 = -1958993896;
unsigned short var_15 = (unsigned short)44214;
unsigned char var_16 = (unsigned char)196;
long long int var_17 = -1079727614235424003LL;
signed char var_18 = (signed char)-100;
unsigned char var_19 = (unsigned char)113;
unsigned int var_20 = 3971402235U;
long long int arr_2 [24] [24] ;
unsigned long long int arr_4 [24] ;
short arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -973194503627224103LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 7564897184367744521ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-28996 : (short)-20975;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
