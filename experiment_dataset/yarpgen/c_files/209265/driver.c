#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -595603419268415475LL;
unsigned short var_1 = (unsigned short)12603;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)62;
unsigned short var_5 = (unsigned short)56677;
int var_9 = 505631230;
int zero = 0;
unsigned char var_11 = (unsigned char)53;
signed char var_12 = (signed char)-112;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)223;
unsigned long long int var_15 = 14549828489303002370ULL;
long long int var_16 = -6953595873862638860LL;
long long int var_17 = -5895347837060265993LL;
signed char arr_1 [13] [13] ;
unsigned long long int arr_2 [13] ;
unsigned short arr_3 [13] [13] ;
unsigned int arr_5 [13] [13] [13] [13] ;
int arr_6 [13] [13] ;
long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 15820468688616694316ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)8251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3028798052U : 1659357939U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1297242985 : -88117811;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2214331401508756015LL : 8783360491437468093LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
