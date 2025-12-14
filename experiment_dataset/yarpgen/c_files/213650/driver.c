#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1525237588;
unsigned short var_5 = (unsigned short)62681;
unsigned short var_6 = (unsigned short)55370;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)226;
int zero = 0;
unsigned short var_12 = (unsigned short)60812;
unsigned int var_13 = 3333570610U;
unsigned int var_14 = 3703825614U;
int arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
unsigned short arr_3 [18] ;
unsigned int arr_5 [18] [18] [18] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1303647442;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)19795;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2950646319U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 865236860U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
