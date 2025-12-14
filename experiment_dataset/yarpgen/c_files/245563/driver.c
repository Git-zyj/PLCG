#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
int var_1 = 826368827;
unsigned short var_2 = (unsigned short)63134;
signed char var_3 = (signed char)105;
unsigned char var_4 = (unsigned char)177;
unsigned char var_5 = (unsigned char)46;
int var_6 = -175401934;
unsigned short var_7 = (unsigned short)12198;
short var_8 = (short)9319;
unsigned char var_10 = (unsigned char)253;
int var_11 = -109878259;
short var_12 = (short)-1703;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1181042911U;
signed char var_16 = (signed char)-87;
unsigned short var_17 = (unsigned short)42155;
int var_18 = 393262350;
short var_19 = (short)12759;
signed char var_20 = (signed char)10;
unsigned int var_21 = 3834250157U;
unsigned char arr_0 [23] ;
unsigned char arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
short arr_5 [12] ;
signed char arr_8 [17] ;
unsigned char arr_9 [17] ;
_Bool arr_4 [23] ;
_Bool arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)22011;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
