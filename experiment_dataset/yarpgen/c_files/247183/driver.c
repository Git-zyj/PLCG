#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13010805023623761538ULL;
long long int var_4 = 741972221510023051LL;
unsigned char var_5 = (unsigned char)141;
int var_7 = -97663553;
unsigned int var_8 = 2622490091U;
unsigned long long int var_9 = 1131174370787313509ULL;
unsigned short var_11 = (unsigned short)23820;
short var_13 = (short)-7383;
unsigned short var_14 = (unsigned short)53223;
unsigned int var_17 = 263852716U;
long long int var_18 = 6135477332320229742LL;
int zero = 0;
signed char var_20 = (signed char)88;
unsigned int var_21 = 3145957937U;
unsigned int var_22 = 1868938386U;
unsigned long long int var_23 = 1718179979361551678ULL;
unsigned char arr_0 [11] [11] ;
unsigned short arr_1 [11] [11] ;
unsigned int arr_2 [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned char arr_4 [11] [11] ;
signed char arr_5 [11] [11] [11] ;
short arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42749;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3507589120U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1595947207U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-28698;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
