#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14407969516702378005ULL;
short var_4 = (short)15768;
unsigned short var_5 = (unsigned short)6699;
unsigned short var_7 = (unsigned short)31101;
unsigned int var_10 = 759551733U;
unsigned int var_16 = 1999363510U;
unsigned int var_19 = 920256075U;
int zero = 0;
signed char var_20 = (signed char)-67;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9059695069176852787ULL;
unsigned short var_23 = (unsigned short)15739;
unsigned short var_24 = (unsigned short)59409;
signed char var_25 = (signed char)73;
unsigned int var_26 = 1379234756U;
int var_27 = -1776995768;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
_Bool arr_2 [24] ;
_Bool arr_3 [24] ;
signed char arr_5 [24] ;
unsigned short arr_6 [24] ;
short arr_7 [24] [24] ;
unsigned long long int arr_9 [24] ;
unsigned short arr_10 [24] [24] [24] ;
signed char arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7350405769248569898ULL : 14683085387020015039ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)34590;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34916 : (unsigned short)10819;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (short)26536;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 5822972920685304820ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)17168 : (unsigned short)3145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)2;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
