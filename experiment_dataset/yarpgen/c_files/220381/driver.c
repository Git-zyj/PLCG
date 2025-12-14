#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19414;
short var_1 = (short)9018;
short var_2 = (short)13067;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)29564;
long long int var_6 = 109098303214429206LL;
short var_7 = (short)-12177;
unsigned long long int var_8 = 17246265763840354844ULL;
unsigned short var_9 = (unsigned short)14617;
unsigned short var_10 = (unsigned short)41870;
unsigned long long int var_11 = 14339909640504680926ULL;
int zero = 0;
int var_12 = 1120722681;
long long int var_13 = -3113688923180325532LL;
short var_14 = (short)3605;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)54128;
unsigned short var_17 = (unsigned short)36769;
_Bool var_18 = (_Bool)0;
long long int var_19 = 2609400456090076654LL;
unsigned char var_20 = (unsigned char)37;
long long int var_21 = -7333377050640607992LL;
long long int var_22 = 4512826905664792582LL;
long long int var_23 = -7835254454117229238LL;
long long int var_24 = -9092314282302125415LL;
long long int var_25 = -6831478437297458745LL;
long long int var_26 = -3104894963524309702LL;
unsigned char arr_0 [14] ;
_Bool arr_1 [14] ;
_Bool arr_2 [14] ;
short arr_5 [14] [14] ;
short arr_19 [15] ;
int arr_3 [14] ;
short arr_6 [14] [14] ;
int arr_12 [13] [13] ;
int arr_13 [13] [13] ;
_Bool arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)10579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (short)-27608;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1259416436;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)14930;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 287253983;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 869925027;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
