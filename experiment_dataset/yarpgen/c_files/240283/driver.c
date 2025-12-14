#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
int var_3 = 1370408596;
signed char var_5 = (signed char)20;
signed char var_8 = (signed char)-53;
long long int var_10 = 5971165083907409257LL;
int zero = 0;
signed char var_11 = (signed char)-83;
unsigned char var_12 = (unsigned char)254;
unsigned int var_13 = 1495108416U;
unsigned char var_14 = (unsigned char)129;
unsigned char var_15 = (unsigned char)106;
short var_16 = (short)-9412;
long long int var_17 = -1128108473811301629LL;
unsigned int var_18 = 2827648730U;
unsigned short var_19 = (unsigned short)17680;
unsigned char var_20 = (unsigned char)94;
unsigned int var_21 = 2079228016U;
unsigned char var_22 = (unsigned char)99;
signed char var_23 = (signed char)-19;
unsigned char var_24 = (unsigned char)129;
unsigned short arr_1 [24] ;
signed char arr_2 [24] ;
int arr_4 [12] [12] ;
int arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned short arr_9 [12] ;
signed char arr_3 [24] ;
unsigned long long int arr_7 [12] [12] ;
signed char arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26541 : (unsigned short)37728;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1923593680;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -423548854;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62445 : (unsigned short)30061;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 5260898328667934562ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)-15;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
