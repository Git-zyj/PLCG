#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)53145;
unsigned int var_3 = 2151895291U;
unsigned long long int var_4 = 1062744734388113978ULL;
unsigned int var_5 = 2904200934U;
signed char var_6 = (signed char)-107;
signed char var_9 = (signed char)63;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_14 = 2670522036547978399LL;
signed char var_16 = (signed char)-80;
unsigned long long int var_18 = 11909587496161777681ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4053673282174620404ULL;
unsigned int var_23 = 306554167U;
unsigned long long int var_24 = 13160088015551990055ULL;
short var_25 = (short)-8806;
unsigned int var_26 = 693689614U;
unsigned int var_27 = 637157539U;
short var_28 = (short)-10405;
unsigned long long int var_29 = 17651347090814700403ULL;
long long int var_30 = -932410870181411826LL;
unsigned char var_31 = (unsigned char)233;
unsigned long long int var_32 = 4318519768124289062ULL;
long long int var_33 = 9203298705573201766LL;
unsigned char var_34 = (unsigned char)129;
unsigned long long int arr_0 [14] ;
unsigned short arr_3 [14] ;
int arr_4 [14] [14] [14] ;
long long int arr_5 [14] [14] [14] ;
signed char arr_6 [14] [14] ;
_Bool arr_7 [14] ;
long long int arr_11 [14] [14] [14] ;
long long int arr_14 [14] [14] [14] [14] ;
signed char arr_15 [14] ;
unsigned long long int arr_21 [21] [21] ;
unsigned long long int arr_22 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 13700542822393180290ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)2325;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -533889578;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4634228826321112149LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -9089615904734739017LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 576627973365070043LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = 10237558668227782221ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = 14067730553523856291ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
