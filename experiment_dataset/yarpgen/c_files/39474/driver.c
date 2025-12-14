#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51608;
unsigned short var_1 = (unsigned short)37416;
unsigned int var_3 = 3494302217U;
unsigned short var_4 = (unsigned short)57882;
int var_5 = 2119139520;
unsigned short var_7 = (unsigned short)45972;
unsigned short var_8 = (unsigned short)61978;
int var_10 = 1813982480;
long long int var_11 = -3567927529060496902LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7586105615570958115LL;
unsigned int var_14 = 675858723U;
short var_16 = (short)-18188;
unsigned long long int var_17 = 6232361826968506944ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)16783;
unsigned short var_19 = (unsigned short)10637;
signed char var_20 = (signed char)117;
long long int var_21 = -7818980137837499959LL;
unsigned short var_22 = (unsigned short)23631;
unsigned short var_23 = (unsigned short)50643;
unsigned short var_24 = (unsigned short)50099;
unsigned short var_25 = (unsigned short)48859;
unsigned short var_26 = (unsigned short)25072;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)76;
short var_29 = (short)-1916;
unsigned short var_30 = (unsigned short)6156;
signed char var_31 = (signed char)31;
unsigned short arr_1 [14] [14] ;
_Bool arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned short arr_6 [14] ;
signed char arr_7 [14] ;
unsigned short arr_18 [11] [11] ;
_Bool arr_4 [14] ;
unsigned int arr_8 [14] ;
short arr_19 [11] [11] [11] ;
_Bool arr_20 [11] [11] [11] [11] ;
short arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)51782 : (unsigned short)52198;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3396450107U : 482877654U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)18108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14583 : (unsigned short)64419;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 2456088095U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-13814 : (short)18893;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)31792 : (short)12177;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
