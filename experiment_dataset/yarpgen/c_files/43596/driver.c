#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12229783800836430697ULL;
long long int var_2 = -5944113977931372856LL;
unsigned int var_3 = 2197308573U;
long long int var_4 = -5871149691410321988LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8697576707265136246LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)119;
unsigned long long int var_12 = 9859035087517898960ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)91;
long long int var_15 = -2145462163514620632LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-4004;
short var_18 = (short)-12152;
unsigned int var_19 = 2076261654U;
unsigned long long int var_20 = 4836100637467470974ULL;
int var_21 = 1996219502;
unsigned short var_22 = (unsigned short)33486;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-21534;
int var_25 = -178530648;
short var_26 = (short)32605;
signed char var_27 = (signed char)15;
unsigned long long int var_28 = 3997955129179685739ULL;
short var_29 = (short)-7896;
unsigned short var_30 = (unsigned short)11740;
unsigned char var_31 = (unsigned char)163;
unsigned long long int var_32 = 5089201305372496811ULL;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)203;
unsigned char var_35 = (unsigned char)193;
short var_36 = (short)-27606;
long long int var_37 = 344437939718322831LL;
int var_38 = 1860761049;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 3265019276493073018ULL;
unsigned short var_41 = (unsigned short)62199;
unsigned long long int var_42 = 18339948117966499049ULL;
unsigned long long int var_43 = 8911681313047586510ULL;
long long int var_44 = -56657432596076265LL;
unsigned int var_45 = 1429303820U;
unsigned long long int var_46 = 15372094994444275001ULL;
unsigned long long int var_47 = 14962506296722222333ULL;
unsigned short var_48 = (unsigned short)11414;
_Bool var_49 = (_Bool)0;
_Bool var_50 = (_Bool)1;
unsigned long long int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
short arr_5 [13] ;
unsigned long long int arr_6 [13] [13] [13] ;
short arr_7 [13] ;
_Bool arr_8 [13] [13] [13] [13] ;
long long int arr_10 [13] [13] [13] [13] [13] ;
unsigned long long int arr_12 [13] [13] [13] [13] [13] [13] [13] ;
unsigned short arr_20 [13] [13] [13] [13] [13] ;
unsigned long long int arr_28 [10] [10] [10] ;
_Bool arr_31 [10] [10] [10] [10] [10] ;
_Bool arr_19 [13] [13] [13] [13] ;
unsigned int arr_51 [10] ;
short arr_54 [10] [10] [10] ;
unsigned long long int arr_57 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 16850287252166297973ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)52658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)30023;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 14163912495520570245ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)-28691;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -4396192918981110636LL : 5516267212621718647LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 12974578422785066890ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)30059;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 5172017969473803463ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? 878290377U : 513077920U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (short)1498;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_57 [i_0] [i_1] = 1886711542980962967ULL;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_54 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
