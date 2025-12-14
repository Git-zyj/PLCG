#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1688859525;
unsigned short var_1 = (unsigned short)57192;
int var_2 = 1776350875;
unsigned char var_4 = (unsigned char)189;
signed char var_5 = (signed char)53;
unsigned short var_6 = (unsigned short)30200;
unsigned short var_7 = (unsigned short)34170;
unsigned char var_8 = (unsigned char)204;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)55;
unsigned char var_11 = (unsigned char)174;
long long int var_12 = 6015636745702963011LL;
long long int var_13 = -4556081704117249344LL;
signed char var_14 = (signed char)-75;
int var_15 = 470294267;
int zero = 0;
signed char var_16 = (signed char)84;
int var_17 = 1344274693;
int var_18 = 1939623408;
unsigned long long int var_19 = 16290176413904727506ULL;
short var_20 = (short)-31719;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)232;
unsigned long long int var_24 = 5130514017680582298ULL;
unsigned short var_25 = (unsigned short)61843;
unsigned int var_26 = 3301046747U;
unsigned int var_27 = 1257559921U;
long long int var_28 = 7895974256073301770LL;
unsigned int var_29 = 4134744826U;
long long int arr_1 [24] ;
unsigned char arr_3 [24] ;
long long int arr_7 [19] ;
unsigned short arr_9 [19] [19] [19] ;
short arr_10 [19] [19] [19] ;
_Bool arr_12 [19] [19] [19] ;
int arr_15 [19] ;
unsigned int arr_18 [19] ;
long long int arr_20 [19] ;
short arr_24 [12] [12] ;
unsigned short arr_28 [21] [21] ;
unsigned long long int arr_33 [21] [21] ;
short arr_4 [24] [24] ;
int arr_5 [24] ;
_Bool arr_8 [19] ;
int arr_13 [19] ;
int arr_14 [19] ;
unsigned short arr_17 [19] [19] ;
unsigned short arr_25 [12] ;
int arr_26 [12] [12] ;
short arr_29 [21] [21] ;
unsigned int arr_36 [21] [21] [21] ;
short arr_37 [21] ;
unsigned char arr_38 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 690267841908283374LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 8936080679092712268LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)41187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)3563;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1562335079 : -107755331;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 3136503314U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = -8867141450639455848LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (short)16911;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)30451;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_33 [i_0] [i_1] = 14733227771225528897ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-9714;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 837522295;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = -671997079;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = -2053081349;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38573 : (unsigned short)53688;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (unsigned short)21060;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = -572080042;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = (short)7827;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2977092094U : 690311740U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (short)31142 : (short)29554;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)80 : (unsigned char)212;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
