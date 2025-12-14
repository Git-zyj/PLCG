#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17915909939318891477ULL;
unsigned long long int var_2 = 5070590566523316372ULL;
long long int var_3 = -7327783615288401331LL;
signed char var_5 = (signed char)53;
unsigned long long int var_8 = 5125103135966637650ULL;
unsigned char var_9 = (unsigned char)98;
unsigned short var_11 = (unsigned short)12613;
short var_15 = (short)-12597;
int zero = 0;
unsigned char var_16 = (unsigned char)119;
short var_17 = (short)26123;
unsigned char var_18 = (unsigned char)9;
long long int var_19 = -1698275025061963089LL;
unsigned char var_20 = (unsigned char)223;
long long int var_21 = 853866576127576207LL;
unsigned short var_22 = (unsigned short)23310;
unsigned long long int var_23 = 7239128812193398639ULL;
_Bool var_24 = (_Bool)1;
long long int arr_3 [14] ;
unsigned char arr_4 [14] [14] ;
signed char arr_5 [21] ;
unsigned long long int arr_6 [21] ;
short arr_7 [21] ;
short arr_11 [20] ;
signed char arr_12 [20] ;
unsigned char arr_14 [20] [20] ;
int arr_8 [21] [21] ;
unsigned long long int arr_15 [20] [20] ;
long long int arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -8283422902539531979LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 13952305016050689368ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-31228;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)26811;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 850626902;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 12358219666345735065ULL : 17458530592815907167ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -811986405994350012LL : 6088470250236372049LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
