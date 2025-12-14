#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1762705244U;
unsigned long long int var_2 = 6946861441872883301ULL;
unsigned long long int var_3 = 11648715227532780951ULL;
unsigned int var_5 = 2022186964U;
int var_7 = -1096712788;
unsigned long long int var_8 = 9759024523383528849ULL;
signed char var_11 = (signed char)-78;
unsigned char var_14 = (unsigned char)168;
int var_16 = -570503507;
int var_19 = 1129047372;
int zero = 0;
unsigned long long int var_20 = 14021641521255099524ULL;
short var_21 = (short)116;
int var_22 = -1291413895;
signed char var_23 = (signed char)-111;
unsigned int var_24 = 1203783491U;
unsigned long long int var_25 = 6477432682053452706ULL;
unsigned int var_26 = 3250746117U;
unsigned long long int var_27 = 15106806219905228890ULL;
_Bool arr_2 [21] ;
unsigned short arr_4 [21] ;
signed char arr_7 [21] [21] ;
unsigned char arr_8 [21] ;
signed char arr_9 [21] ;
long long int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3103 : (unsigned short)30710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)85 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-75 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -1647330369264761755LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
