#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
signed char var_1 = (signed char)89;
short var_2 = (short)1443;
signed char var_3 = (signed char)84;
unsigned short var_4 = (unsigned short)50347;
short var_7 = (short)-23584;
signed char var_8 = (signed char)-10;
unsigned short var_11 = (unsigned short)4782;
unsigned short var_12 = (unsigned short)36422;
signed char var_13 = (signed char)73;
unsigned short var_16 = (unsigned short)14837;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3265383834851643712ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8698225290903337244ULL;
short var_21 = (short)30523;
unsigned short var_22 = (unsigned short)36878;
unsigned long long int var_23 = 2276230668805357476ULL;
unsigned long long int var_24 = 13571967009306930569ULL;
unsigned char var_25 = (unsigned char)236;
unsigned char var_26 = (unsigned char)186;
unsigned short arr_3 [23] ;
unsigned char arr_16 [23] ;
unsigned short arr_20 [23] [23] [23] ;
_Bool arr_21 [23] ;
long long int arr_6 [23] [23] [23] ;
_Bool arr_18 [23] ;
signed char arr_22 [23] [23] ;
signed char arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37321 : (unsigned short)20875;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)27713;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -322689632185261408LL : -6460059983196058771LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)33 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-54 : (signed char)54;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
