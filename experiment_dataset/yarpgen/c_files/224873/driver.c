#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 558851834U;
unsigned int var_2 = 1246570907U;
int var_3 = 771637791;
long long int var_4 = 4229541417214066139LL;
signed char var_5 = (signed char)41;
unsigned char var_6 = (unsigned char)22;
unsigned char var_7 = (unsigned char)40;
int var_8 = 1509524281;
unsigned short var_10 = (unsigned short)53428;
unsigned char var_11 = (unsigned char)167;
int var_12 = 741660466;
unsigned long long int var_13 = 1166586514330709404ULL;
int zero = 0;
signed char var_14 = (signed char)-74;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)12;
short var_17 = (short)24739;
short var_18 = (short)1210;
short var_19 = (short)30750;
short arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
signed char arr_3 [24] ;
signed char arr_4 [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_7 [24] ;
int arr_8 [24] ;
_Bool arr_2 [23] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-32725;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 15197627139862519963ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)50385;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)18432;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1489331056;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -673668658959955467LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
