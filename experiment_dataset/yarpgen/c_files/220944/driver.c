#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2482405908U;
unsigned int var_2 = 1747748380U;
unsigned long long int var_4 = 12276214152374618747ULL;
unsigned short var_5 = (unsigned short)51307;
int var_6 = -2026708227;
int var_7 = 1394729283;
unsigned int var_8 = 1452583020U;
unsigned short var_9 = (unsigned short)2007;
unsigned short var_10 = (unsigned short)61023;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)23047;
unsigned int var_15 = 206783198U;
unsigned char var_16 = (unsigned char)37;
int var_17 = 447972024;
unsigned short var_19 = (unsigned short)30835;
int zero = 0;
unsigned short var_20 = (unsigned short)58787;
unsigned long long int var_21 = 15733356243341087270ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)17657;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 1217831656U;
signed char var_26 = (signed char)-42;
unsigned char var_27 = (unsigned char)52;
unsigned int var_28 = 3702876575U;
unsigned int var_29 = 2960143745U;
unsigned short var_30 = (unsigned short)59648;
short var_31 = (short)-22115;
_Bool var_32 = (_Bool)0;
long long int arr_0 [18] ;
unsigned short arr_1 [18] ;
signed char arr_2 [18] [18] [18] ;
unsigned short arr_3 [18] ;
unsigned int arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] [18] [18] ;
unsigned char arr_12 [18] [18] [18] [18] [18] ;
unsigned char arr_13 [18] [18] [18] ;
unsigned short arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1120977361746994372LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)44784;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)23525;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2988059452U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 1307567455U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)163 : (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1906081615U : 1855323962U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 5992069087942056498ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned short)37820;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
