#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
signed char var_2 = (signed char)-85;
unsigned char var_6 = (unsigned char)47;
unsigned int var_7 = 1176944484U;
unsigned char var_8 = (unsigned char)238;
signed char var_9 = (signed char)-96;
short var_11 = (short)-16686;
signed char var_12 = (signed char)-32;
short var_14 = (short)-19322;
unsigned int var_15 = 353242940U;
int zero = 0;
int var_16 = -1026565299;
long long int var_17 = -2389062492625535124LL;
short var_18 = (short)18502;
int var_19 = 956642550;
_Bool var_20 = (_Bool)0;
short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
short arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned long long int arr_6 [15] [15] [15] [15] ;
short arr_7 [15] [15] [15] ;
unsigned long long int arr_8 [24] ;
signed char arr_11 [24] [24] [24] ;
signed char arr_14 [24] [24] [24] ;
unsigned short arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1535;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)8410;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)29879;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8858231116660611409ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)15038;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 6977986665525933543ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (unsigned short)37870;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
