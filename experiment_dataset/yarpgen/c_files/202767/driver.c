#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21903;
unsigned long long int var_2 = 5735121503237360219ULL;
unsigned int var_3 = 2486985567U;
unsigned long long int var_4 = 13987034014295689178ULL;
unsigned int var_7 = 1882393837U;
unsigned short var_10 = (unsigned short)40099;
unsigned int var_14 = 3723002968U;
unsigned short var_15 = (unsigned short)14009;
int zero = 0;
signed char var_18 = (signed char)-113;
unsigned long long int var_19 = 619076005194195678ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)97;
unsigned int var_22 = 3074874282U;
int var_23 = 1327656365;
unsigned int var_24 = 1925906984U;
unsigned short var_25 = (unsigned short)36727;
unsigned char var_26 = (unsigned char)20;
short var_27 = (short)23316;
signed char arr_0 [20] ;
unsigned char arr_3 [14] [14] ;
signed char arr_4 [14] ;
unsigned int arr_6 [11] ;
long long int arr_7 [11] ;
unsigned char arr_8 [11] [11] ;
signed char arr_9 [11] [11] ;
long long int arr_14 [11] [11] ;
unsigned short arr_5 [14] [14] ;
signed char arr_15 [11] [11] ;
unsigned int arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3908929726U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -4671630240179279746LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)13 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-26 : (signed char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 2041640352590016063LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)45118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 3192520058U : 2284121513U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
