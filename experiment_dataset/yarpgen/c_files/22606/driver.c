#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13674757195744292344ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)62987;
short var_4 = (short)15655;
short var_5 = (short)-10339;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 279366366U;
unsigned short var_9 = (unsigned short)36757;
unsigned long long int var_11 = 9976747407253356825ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 6770627362433036627ULL;
unsigned char var_15 = (unsigned char)124;
unsigned long long int var_16 = 9583202243101218119ULL;
signed char var_17 = (signed char)36;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)59;
int var_21 = 1893673736;
short var_22 = (short)-9745;
signed char var_23 = (signed char)-71;
_Bool var_24 = (_Bool)1;
long long int var_25 = 2293001222659624030LL;
unsigned int var_26 = 3271604883U;
int var_27 = -404082462;
unsigned char var_28 = (unsigned char)81;
signed char var_29 = (signed char)84;
unsigned short arr_0 [13] ;
_Bool arr_5 [13] [13] [13] ;
unsigned char arr_7 [13] ;
unsigned short arr_11 [13] [13] [13] ;
_Bool arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)25171;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)51856;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
