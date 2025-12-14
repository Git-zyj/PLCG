#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
long long int var_2 = -6632151901238520611LL;
short var_3 = (short)1569;
unsigned int var_6 = 2810538307U;
long long int var_8 = -3263183556452891895LL;
long long int var_11 = -211356996684887884LL;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)40699;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2643860032U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)1;
unsigned int var_20 = 2650372348U;
unsigned char var_21 = (unsigned char)236;
short var_22 = (short)14541;
int var_23 = 289590913;
short arr_0 [11] ;
_Bool arr_1 [11] ;
signed char arr_2 [11] ;
unsigned int arr_3 [15] [15] ;
int arr_4 [15] ;
unsigned int arr_5 [15] [15] ;
short arr_6 [15] ;
signed char arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)8200;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 551591400U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 751005486;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1468281083U : 1931069498U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)26087 : (short)14439;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-118 : (signed char)-1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
