#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4092422022U;
unsigned int var_1 = 1480203808U;
unsigned int var_3 = 3829431205U;
unsigned char var_4 = (unsigned char)235;
unsigned short var_5 = (unsigned short)62704;
unsigned int var_6 = 116361973U;
unsigned long long int var_8 = 3173812069562276741ULL;
int var_9 = 1622685136;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1673630526740771165LL;
int var_16 = 844904487;
_Bool var_17 = (_Bool)0;
int var_18 = -449177765;
short var_19 = (short)-17233;
signed char var_20 = (signed char)-121;
short var_21 = (short)10786;
signed char var_22 = (signed char)-56;
int var_23 = 1429813726;
unsigned char var_24 = (unsigned char)72;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)4770;
unsigned long long int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned int arr_2 [18] [18] ;
signed char arr_3 [18] ;
unsigned long long int arr_4 [18] ;
int arr_5 [18] ;
signed char arr_6 [18] ;
unsigned short arr_8 [18] ;
int arr_9 [18] ;
short arr_10 [18] ;
signed char arr_13 [25] ;
signed char arr_7 [18] ;
int arr_11 [18] ;
unsigned int arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10553052020557732152ULL : 8920086813405887307ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3836600994U : 565181516U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1813487325046410943ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1581524804 : -589992700;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)2503;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1945215654;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-29936 : (short)6086;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -744953185 : -416973367;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2626185239U : 4214791590U;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
