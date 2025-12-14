#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1471395627;
unsigned char var_3 = (unsigned char)31;
unsigned char var_6 = (unsigned char)129;
short var_7 = (short)-10235;
unsigned short var_9 = (unsigned short)5987;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)55;
signed char var_14 = (signed char)30;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -1154299606;
unsigned int var_21 = 2533302078U;
signed char var_22 = (signed char)66;
short var_23 = (short)20252;
_Bool arr_0 [15] [15] ;
long long int arr_2 [15] ;
_Bool arr_5 [14] ;
unsigned long long int arr_6 [14] ;
unsigned long long int arr_3 [15] ;
unsigned long long int arr_4 [15] ;
int arr_7 [14] ;
long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1907899144100756058LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 5335963060962313341ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2182271587459170771ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 5709741284259418416ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1636408562;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -1749614317003636418LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
