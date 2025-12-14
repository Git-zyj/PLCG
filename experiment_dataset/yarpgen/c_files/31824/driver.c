#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
unsigned short var_3 = (unsigned short)19724;
long long int var_6 = -7533505115064582782LL;
unsigned short var_10 = (unsigned short)26305;
unsigned char var_12 = (unsigned char)219;
_Bool var_13 = (_Bool)0;
int var_14 = 1613637434;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)6;
_Bool var_17 = (_Bool)0;
int var_18 = 1528129207;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
short var_21 = (short)29620;
signed char var_22 = (signed char)16;
int var_23 = -105476020;
signed char var_24 = (signed char)93;
unsigned short arr_0 [18] ;
_Bool arr_1 [18] ;
_Bool arr_2 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned short arr_12 [24] ;
_Bool arr_13 [24] ;
_Bool arr_14 [24] [24] ;
unsigned int arr_20 [24] [24] [24] ;
unsigned int arr_22 [24] [24] [24] [24] ;
int arr_23 [24] ;
signed char arr_11 [18] ;
unsigned char arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)19191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 338878087U : 310903370U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)3088;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1287069214U : 3532174191U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 269648256U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -227342254;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (unsigned char)56;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
