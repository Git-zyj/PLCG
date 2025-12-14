#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23695;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)31792;
unsigned char var_5 = (unsigned char)31;
unsigned int var_7 = 3446785181U;
unsigned int var_10 = 1814977751U;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)4;
int zero = 0;
signed char var_15 = (signed char)-66;
int var_16 = 1460621812;
long long int var_17 = 3019859450028270996LL;
int var_18 = 1513077205;
int var_19 = -302338455;
unsigned int var_20 = 127625385U;
unsigned char var_21 = (unsigned char)92;
int var_22 = 409928176;
short var_23 = (short)-12286;
unsigned char var_24 = (unsigned char)180;
unsigned char var_25 = (unsigned char)108;
unsigned short var_26 = (unsigned short)19747;
unsigned char var_27 = (unsigned char)146;
unsigned short var_28 = (unsigned short)19450;
unsigned char var_29 = (unsigned char)217;
unsigned char var_30 = (unsigned char)228;
unsigned short var_31 = (unsigned short)11818;
short arr_2 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
_Bool arr_8 [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] ;
_Bool arr_7 [19] ;
unsigned char arr_10 [19] ;
_Bool arr_14 [19] ;
unsigned char arr_19 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31265;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 5897630844854198644ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1750571485538036626ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 11769175895181887443ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)246;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
