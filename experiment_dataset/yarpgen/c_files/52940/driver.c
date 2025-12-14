#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11759;
unsigned long long int var_1 = 53835734306058662ULL;
unsigned long long int var_2 = 4773906698027487941ULL;
unsigned char var_3 = (unsigned char)173;
unsigned char var_7 = (unsigned char)243;
unsigned int var_9 = 4292942384U;
int var_10 = 127825496;
unsigned short var_11 = (unsigned short)51992;
unsigned short var_13 = (unsigned short)21118;
short var_14 = (short)21458;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4231044528U;
int zero = 0;
unsigned int var_17 = 878474168U;
unsigned int var_18 = 852937213U;
unsigned short var_19 = (unsigned short)52184;
unsigned int var_20 = 4021644550U;
unsigned short var_21 = (unsigned short)35089;
unsigned char var_22 = (unsigned char)28;
signed char arr_1 [16] ;
unsigned long long int arr_4 [20] ;
signed char arr_5 [20] ;
short arr_8 [10] ;
signed char arr_2 [16] [16] ;
unsigned char arr_3 [16] ;
int arr_6 [20] ;
unsigned short arr_7 [20] ;
unsigned int arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 10151364618217932125ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)-2912;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)32 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -746286888;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)53326;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 1018914347U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
