#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
unsigned char var_1 = (unsigned char)239;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8655;
unsigned long long int var_7 = 16800905731914181222ULL;
unsigned long long int var_9 = 3605075229341295166ULL;
int zero = 0;
signed char var_10 = (signed char)-92;
short var_11 = (short)30500;
unsigned short var_12 = (unsigned short)57901;
unsigned short var_13 = (unsigned short)2681;
unsigned short var_14 = (unsigned short)43716;
unsigned short var_15 = (unsigned short)61040;
unsigned int var_16 = 2517307246U;
unsigned int var_17 = 1407161372U;
unsigned long long int var_18 = 9487483336507985510ULL;
signed char var_19 = (signed char)118;
_Bool arr_9 [17] ;
unsigned short arr_10 [17] [17] ;
signed char arr_11 [17] ;
unsigned char arr_12 [20] [20] ;
signed char arr_14 [23] [23] ;
signed char arr_17 [24] ;
short arr_18 [24] [24] ;
unsigned short arr_7 [10] ;
_Bool arr_21 [24] [24] ;
unsigned short arr_22 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58977 : (unsigned short)53437;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-107 : (signed char)-2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (short)24246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)6012;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (unsigned short)54000;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
