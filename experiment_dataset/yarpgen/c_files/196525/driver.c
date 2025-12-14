#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-29198;
unsigned long long int var_9 = 2312416212077207565ULL;
short var_13 = (short)24695;
unsigned char var_17 = (unsigned char)152;
unsigned int var_18 = 3925629363U;
int zero = 0;
unsigned long long int var_19 = 4747763630867622664ULL;
unsigned char var_20 = (unsigned char)114;
long long int var_21 = 7817192863301960833LL;
int var_22 = -934512218;
int var_23 = 2003148571;
unsigned char var_24 = (unsigned char)5;
short var_25 = (short)-15160;
unsigned char var_26 = (unsigned char)122;
unsigned short var_27 = (unsigned short)33679;
unsigned short var_28 = (unsigned short)47401;
_Bool arr_0 [11] ;
long long int arr_1 [11] ;
unsigned short arr_4 [23] [23] ;
int arr_7 [23] [23] ;
int arr_10 [17] [17] ;
unsigned short arr_3 [11] ;
_Bool arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -4795848322034515222LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5710;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 408551209;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 700829039;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)56548;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
