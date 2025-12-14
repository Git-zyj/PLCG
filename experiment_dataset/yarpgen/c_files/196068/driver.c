#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29092;
unsigned short var_1 = (unsigned short)35236;
long long int var_2 = 4249507905274127195LL;
unsigned short var_3 = (unsigned short)40446;
long long int var_4 = 5438146180798451372LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)18;
short var_8 = (short)19774;
long long int var_9 = 6447267126533266330LL;
unsigned long long int var_10 = 13296328093959785803ULL;
unsigned short var_11 = (unsigned short)14136;
int zero = 0;
unsigned long long int var_12 = 631631699231818879ULL;
short var_13 = (short)-20961;
long long int var_14 = -3288827719922054522LL;
short var_15 = (short)17758;
unsigned short var_16 = (unsigned short)8075;
short var_17 = (short)-15103;
long long int arr_1 [17] ;
unsigned char arr_2 [17] ;
_Bool arr_3 [17] ;
unsigned char arr_4 [17] [17] ;
unsigned short arr_6 [19] ;
long long int arr_7 [19] [19] ;
short arr_8 [19] ;
_Bool arr_5 [17] [17] [17] ;
unsigned char arr_11 [19] [19] ;
short arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 4829993490517845064LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)16935;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -2728049818435896067LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)5159;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (short)6048;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
