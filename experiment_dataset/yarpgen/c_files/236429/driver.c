#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25578;
long long int var_5 = -6955559910242848811LL;
unsigned char var_6 = (unsigned char)59;
short var_7 = (short)7099;
int var_8 = -55320819;
int var_9 = -902927315;
long long int var_11 = -9055194806807223564LL;
signed char var_12 = (signed char)-64;
unsigned int var_14 = 2349597099U;
int zero = 0;
unsigned char var_15 = (unsigned char)221;
unsigned short var_16 = (unsigned short)25919;
signed char var_17 = (signed char)-114;
int var_18 = 1794199820;
unsigned long long int var_19 = 15706042804408739906ULL;
unsigned short var_20 = (unsigned short)3474;
unsigned short var_21 = (unsigned short)17138;
unsigned int var_22 = 3107220051U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)2;
unsigned char var_25 = (unsigned char)8;
signed char arr_0 [11] ;
short arr_1 [11] ;
unsigned long long int arr_2 [11] [11] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] ;
signed char arr_6 [17] [17] ;
unsigned short arr_7 [17] [17] [17] ;
unsigned int arr_9 [17] [17] [17] [17] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-17988;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 13542650579683562036ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-28342;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 13874487716681854678ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)63503;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1322542892U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -112602390;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
