#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
unsigned short var_1 = (unsigned short)18122;
short var_2 = (short)11003;
signed char var_3 = (signed char)-58;
unsigned short var_4 = (unsigned short)50648;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)13913;
unsigned int var_7 = 2379302050U;
unsigned int var_8 = 1085960831U;
int zero = 0;
unsigned short var_10 = (unsigned short)16890;
unsigned char var_11 = (unsigned char)141;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)15864;
int var_15 = 1567612657;
signed char var_16 = (signed char)-79;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned int arr_2 [16] [16] [16] ;
_Bool arr_3 [16] [16] ;
signed char arr_5 [16] ;
int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)40106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1779099860U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1664402762U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1836939130 : -1893101780;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
