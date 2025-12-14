#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2549214698U;
signed char var_1 = (signed char)-53;
_Bool var_2 = (_Bool)0;
long long int var_3 = -4017523860222211599LL;
unsigned long long int var_4 = 13800906794458230651ULL;
signed char var_5 = (signed char)-104;
unsigned char var_6 = (unsigned char)236;
unsigned char var_7 = (unsigned char)17;
unsigned long long int var_8 = 9782535429483741845ULL;
signed char var_9 = (signed char)-61;
unsigned long long int var_12 = 13745906255434191282ULL;
unsigned long long int var_14 = 3349429592504676183ULL;
int var_16 = -559910731;
int var_17 = 1532809525;
unsigned char var_18 = (unsigned char)113;
unsigned char var_19 = (unsigned char)148;
int zero = 0;
unsigned short var_20 = (unsigned short)6146;
signed char var_21 = (signed char)-9;
signed char var_22 = (signed char)50;
unsigned long long int var_23 = 14664076205950575426ULL;
signed char var_24 = (signed char)-51;
int var_25 = 1394606266;
unsigned int var_26 = 1323958556U;
long long int var_27 = 2796140340501180851LL;
unsigned short var_28 = (unsigned short)50356;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-21201;
unsigned long long int var_31 = 17003086330531997388ULL;
short var_32 = (short)-9647;
unsigned short var_33 = (unsigned short)35685;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_4 [18] ;
long long int arr_9 [18] ;
short arr_12 [18] ;
int arr_23 [11] [11] [11] ;
unsigned int arr_2 [18] ;
int arr_16 [18] [18] ;
unsigned char arr_17 [18] ;
unsigned char arr_27 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 6174835222907122958ULL : 11768413347555148457ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3981440484787241438ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1334493336628394721LL : -2717910131998132644LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)4608;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -487026438 : -1792786516;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3714719231U : 3895192797U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -1014751381 : 1732118840;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)239 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)250 : (unsigned char)190;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
