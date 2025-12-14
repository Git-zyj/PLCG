#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -675193637;
int var_2 = 1095098358;
unsigned char var_5 = (unsigned char)27;
unsigned char var_6 = (unsigned char)108;
unsigned char var_7 = (unsigned char)254;
unsigned char var_8 = (unsigned char)47;
int var_9 = 277088111;
unsigned char var_13 = (unsigned char)159;
unsigned char var_14 = (unsigned char)240;
int var_15 = 2078839583;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
unsigned char var_17 = (unsigned char)254;
unsigned char var_18 = (unsigned char)33;
unsigned char var_19 = (unsigned char)140;
unsigned char var_20 = (unsigned char)74;
unsigned char var_21 = (unsigned char)62;
int var_22 = -1389805008;
int var_23 = 1801783906;
unsigned char var_24 = (unsigned char)115;
unsigned char var_25 = (unsigned char)156;
unsigned char var_26 = (unsigned char)71;
int var_27 = -1365829604;
unsigned char var_28 = (unsigned char)45;
int arr_0 [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
unsigned char arr_5 [13] [13] [13] ;
int arr_8 [13] [13] [13] [13] ;
int arr_16 [13] ;
int arr_17 [13] [13] [13] [13] ;
int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1983893419 : 1225890469;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)146 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -77212526;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -594558319 : -544535436;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1348920303;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 1501171116 : 1895692891;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
