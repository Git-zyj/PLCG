#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27622;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)46805;
unsigned short var_3 = (unsigned short)46447;
unsigned short var_4 = (unsigned short)62342;
signed char var_5 = (signed char)-27;
unsigned char var_6 = (unsigned char)50;
unsigned long long int var_7 = 10003721739567972390ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -28225824374207155LL;
unsigned char var_11 = (unsigned char)108;
int zero = 0;
int var_13 = -2035994809;
signed char var_14 = (signed char)64;
short var_15 = (short)32525;
unsigned int var_16 = 721615941U;
unsigned int var_17 = 984064855U;
unsigned char var_18 = (unsigned char)153;
unsigned char var_19 = (unsigned char)244;
long long int var_20 = -2817514357435629068LL;
unsigned int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
_Bool arr_2 [18] [18] ;
unsigned short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 389235131U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 7263664887589834274ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 4512555579716840127ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)57704;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
