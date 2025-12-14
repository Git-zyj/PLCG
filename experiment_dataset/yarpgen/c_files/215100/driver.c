#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
int var_1 = -1675629948;
int var_2 = -1237585696;
int var_3 = 898342624;
unsigned char var_4 = (unsigned char)186;
unsigned char var_6 = (unsigned char)221;
unsigned short var_7 = (unsigned short)24810;
long long int var_8 = 8650309559878829977LL;
unsigned short var_10 = (unsigned short)8253;
unsigned int var_11 = 3332679793U;
int zero = 0;
short var_13 = (short)4677;
unsigned int var_14 = 226801360U;
short var_15 = (short)-28404;
unsigned long long int var_16 = 12858923073382270612ULL;
int var_17 = -152143335;
signed char var_18 = (signed char)-98;
short var_19 = (short)-435;
unsigned short var_20 = (unsigned short)34832;
unsigned char var_21 = (unsigned char)156;
unsigned short var_22 = (unsigned short)4878;
unsigned short var_23 = (unsigned short)22663;
int var_24 = 1977034916;
long long int var_25 = -1573655439334102848LL;
unsigned char var_26 = (unsigned char)193;
unsigned long long int var_27 = 11388741441639776608ULL;
unsigned short var_28 = (unsigned short)22642;
long long int var_29 = -2866972551478906201LL;
unsigned char var_30 = (unsigned char)232;
signed char var_31 = (signed char)5;
long long int var_32 = 7674656753740390228LL;
int arr_1 [17] [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_6 [11] ;
unsigned short arr_8 [18] ;
short arr_9 [18] [18] ;
unsigned char arr_10 [18] [18] ;
unsigned short arr_13 [18] [18] [18] [18] ;
long long int arr_14 [18] [18] ;
unsigned short arr_17 [18] ;
long long int arr_18 [18] [18] [18] [18] ;
_Bool arr_22 [18] [18] [18] [18] ;
int arr_23 [18] ;
unsigned char arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_16 [18] [18] [18] ;
signed char arr_21 [18] [18] ;
signed char arr_24 [18] [18] [18] ;
long long int arr_27 [18] ;
long long int arr_30 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 652749690;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)34637;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)36446;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-16708;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39091;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = 8989894686666440190LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned short)60298;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 482618292596042039LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 1905948302;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 12495279169059257883ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = 867712995021699899LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = -7033475708876144428LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
