#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8027881422101712926LL;
unsigned char var_3 = (unsigned char)1;
signed char var_5 = (signed char)112;
unsigned char var_6 = (unsigned char)160;
signed char var_9 = (signed char)-72;
unsigned long long int var_10 = 16943800388070543347ULL;
signed char var_11 = (signed char)-88;
signed char var_12 = (signed char)-25;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)160;
signed char var_17 = (signed char)77;
unsigned int var_18 = 111370218U;
unsigned long long int var_19 = 8127499878773355964ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 950956718569778664ULL;
unsigned int var_22 = 2542164254U;
long long int var_23 = 2984392699525030221LL;
int var_24 = -1079812282;
int var_25 = 765272824;
unsigned int var_26 = 3516386532U;
signed char var_27 = (signed char)-75;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 17973585329211702583ULL;
_Bool arr_0 [13] ;
unsigned int arr_3 [13] [13] ;
unsigned char arr_6 [13] [13] [13] ;
unsigned char arr_10 [24] [24] ;
unsigned short arr_11 [24] ;
signed char arr_12 [24] ;
short arr_16 [17] ;
unsigned char arr_9 [13] [13] [13] ;
int arr_13 [24] ;
_Bool arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3319705767U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)43354;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (short)3428;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1229747727;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
