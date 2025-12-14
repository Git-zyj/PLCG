#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1370225594U;
unsigned short var_3 = (unsigned short)16260;
unsigned short var_6 = (unsigned short)7629;
_Bool var_7 = (_Bool)1;
unsigned long long int var_14 = 1852834382296735246ULL;
int zero = 0;
int var_16 = 684768012;
unsigned int var_17 = 2684189979U;
long long int var_18 = -7090915428125751285LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)231;
unsigned int arr_1 [13] ;
_Bool arr_5 [22] ;
long long int arr_7 [12] [12] ;
signed char arr_2 [13] ;
unsigned char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3332918215U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 6181833498686079151LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)232;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
