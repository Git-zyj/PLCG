#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)28;
unsigned char var_5 = (unsigned char)160;
unsigned int var_6 = 2178281971U;
unsigned short var_8 = (unsigned short)24244;
unsigned int var_9 = 1261078146U;
signed char var_12 = (signed char)-61;
long long int var_13 = 7606052162712797134LL;
unsigned int var_14 = 2297506668U;
unsigned long long int var_17 = 14372242889801258467ULL;
signed char var_18 = (signed char)120;
int zero = 0;
short var_19 = (short)19270;
int var_20 = 484397886;
signed char var_21 = (signed char)4;
unsigned int var_22 = 72412712U;
long long int var_23 = -7248670678323820058LL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)2996;
long long int var_26 = 3086766097188385642LL;
unsigned short var_27 = (unsigned short)27359;
unsigned short var_28 = (unsigned short)50593;
unsigned long long int var_29 = 13152428707560333262ULL;
unsigned int var_30 = 1404783788U;
short var_31 = (short)30370;
short arr_0 [12] ;
int arr_1 [12] [12] ;
unsigned long long int arr_3 [12] ;
unsigned char arr_5 [20] [20] ;
long long int arr_9 [23] [23] ;
long long int arr_13 [25] [25] ;
short arr_19 [11] [11] ;
signed char arr_4 [12] ;
unsigned short arr_7 [20] ;
long long int arr_8 [20] ;
_Bool arr_23 [11] ;
unsigned long long int arr_24 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)26842 : (short)21508;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1303881202;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5473247126399518841ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -3802588364333833734LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 8449138630461601144LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (short)15201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)77 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)26699;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2360941157148445899LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 10173749033178452229ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
