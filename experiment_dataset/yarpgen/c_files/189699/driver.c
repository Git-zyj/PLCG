#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)437;
short var_1 = (short)27055;
unsigned int var_3 = 1404459308U;
long long int var_4 = 6277374463703551740LL;
_Bool var_6 = (_Bool)0;
int var_7 = -1334667490;
unsigned short var_11 = (unsigned short)38807;
int var_12 = -1451801321;
long long int var_16 = -7104206729130933762LL;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
signed char var_18 = (signed char)117;
unsigned short var_19 = (unsigned short)24381;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8443258013485184745LL;
unsigned int arr_4 [23] [23] ;
_Bool arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2639390900U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
