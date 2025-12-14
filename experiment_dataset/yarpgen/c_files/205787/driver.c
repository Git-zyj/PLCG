#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5197814356755932416LL;
unsigned short var_1 = (unsigned short)34032;
long long int var_2 = -5199915286891822623LL;
int var_3 = -1640326535;
unsigned char var_5 = (unsigned char)169;
long long int var_6 = -5333180770888343248LL;
short var_8 = (short)18156;
int var_9 = 39386879;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)57901;
unsigned short var_12 = (unsigned short)12525;
int var_13 = -1065844978;
unsigned int var_14 = 1498849854U;
long long int var_15 = 7123143081941956101LL;
signed char var_16 = (signed char)21;
unsigned short var_17 = (unsigned short)4858;
unsigned char var_18 = (unsigned char)130;
signed char var_19 = (signed char)125;
unsigned long long int var_20 = 5623211695496317305ULL;
_Bool var_21 = (_Bool)0;
int var_22 = 384084692;
short var_23 = (short)24213;
unsigned int var_24 = 4274587063U;
int var_25 = 60653189;
signed char var_26 = (signed char)-59;
long long int var_27 = 3039621840919758252LL;
_Bool var_28 = (_Bool)1;
_Bool arr_0 [11] ;
short arr_1 [11] ;
short arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned int arr_5 [15] ;
long long int arr_6 [15] ;
_Bool arr_9 [15] ;
unsigned short arr_14 [15] ;
short arr_16 [15] ;
_Bool arr_2 [11] ;
unsigned char arr_7 [15] [15] ;
_Bool arr_12 [15] [15] ;
unsigned int arr_19 [15] ;
long long int arr_20 [15] ;
int arr_24 [15] [15] ;
unsigned long long int arr_25 [15] ;
unsigned int arr_26 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-5598;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-27371;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2135336244U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -5249062838844808843LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned short)14652;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (short)-10125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 4046120291U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 4443463679094512866LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = -978140419;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 5669480583260459972ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = 1275152073U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
