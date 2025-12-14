#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3631;
unsigned long long int var_2 = 15450719243005146068ULL;
signed char var_3 = (signed char)59;
unsigned int var_4 = 3297581097U;
unsigned long long int var_5 = 13011036477186351912ULL;
unsigned char var_6 = (unsigned char)172;
unsigned long long int var_7 = 8606081529610021996ULL;
int var_9 = -505333736;
int var_10 = -849736512;
signed char var_11 = (signed char)-54;
short var_12 = (short)-2371;
unsigned char var_13 = (unsigned char)172;
unsigned int var_14 = 1130128344U;
int var_16 = -1044810374;
long long int var_17 = -3604822626529032247LL;
short var_18 = (short)-24916;
int zero = 0;
unsigned long long int var_20 = 17089930339562759225ULL;
int var_21 = -759085876;
unsigned short var_22 = (unsigned short)53446;
short var_23 = (short)31941;
int var_24 = 1518382255;
unsigned short var_25 = (unsigned short)53462;
signed char var_26 = (signed char)6;
signed char var_27 = (signed char)72;
signed char var_28 = (signed char)-80;
unsigned short var_29 = (unsigned short)1148;
unsigned long long int var_30 = 14507910017317688892ULL;
signed char var_31 = (signed char)-88;
unsigned long long int var_32 = 15781980831490144156ULL;
int var_33 = -795413711;
signed char var_34 = (signed char)88;
unsigned short var_35 = (unsigned short)13206;
short var_36 = (short)-22827;
signed char var_37 = (signed char)-59;
long long int var_38 = -3592038330104453796LL;
signed char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_3 [19] ;
short arr_5 [19] ;
short arr_9 [19] ;
long long int arr_10 [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
short arr_13 [19] [19] [19] [19] ;
signed char arr_14 [19] [19] [19] ;
_Bool arr_15 [19] [19] [19] ;
short arr_19 [11] ;
unsigned char arr_20 [11] [11] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)17444;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1414564830146608476ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)25967 : (short)24959;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-5879;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -4630815879777489917LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 379404902841563848ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)16017;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)51 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (short)-14173;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)144;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
