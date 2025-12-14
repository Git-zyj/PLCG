#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
signed char var_3 = (signed char)-13;
unsigned int var_6 = 620224962U;
unsigned long long int var_7 = 12228684068099330732ULL;
unsigned int var_9 = 621758250U;
unsigned long long int var_10 = 4426018938163877907ULL;
unsigned char var_11 = (unsigned char)71;
unsigned short var_12 = (unsigned short)38051;
unsigned char var_13 = (unsigned char)27;
unsigned long long int var_14 = 2994195473227948646ULL;
int var_16 = 268712574;
int zero = 0;
short var_17 = (short)-14513;
int var_18 = -1398112917;
unsigned long long int var_19 = 15462062892073392899ULL;
unsigned char var_20 = (unsigned char)27;
unsigned long long int var_21 = 4256722062651639928ULL;
signed char var_22 = (signed char)-14;
signed char var_23 = (signed char)47;
unsigned char var_24 = (unsigned char)105;
signed char var_25 = (signed char)3;
unsigned char var_26 = (unsigned char)109;
int var_27 = -1133382784;
int var_28 = 1378012183;
signed char var_29 = (signed char)-115;
signed char var_30 = (signed char)86;
unsigned short var_31 = (unsigned short)22671;
signed char arr_2 [15] ;
signed char arr_3 [15] ;
short arr_5 [15] [15] ;
unsigned long long int arr_9 [15] [15] [15] ;
unsigned long long int arr_11 [17] ;
signed char arr_14 [17] ;
signed char arr_15 [17] [17] [17] ;
unsigned short arr_16 [17] [17] [17] ;
signed char arr_17 [17] [17] [17] ;
unsigned long long int arr_18 [17] [17] [17] [17] ;
signed char arr_19 [17] [17] [17] [17] ;
unsigned long long int arr_20 [17] [17] [17] [17] [17] [17] ;
signed char arr_21 [17] [17] ;
unsigned long long int arr_6 [15] ;
signed char arr_10 [15] ;
int arr_23 [17] [17] [17] [17] ;
signed char arr_24 [17] [17] [17] [17] ;
unsigned long long int arr_25 [17] [17] [17] [17] ;
signed char arr_26 [17] ;
signed char arr_30 [17] [17] ;
signed char arr_35 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-4804;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 12398947308535834613ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 9896379047264065569ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)-94;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)32340;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-91 : (signed char)-70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4628588415092097235ULL : 4697745154411451098ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-83 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15889126941139858927ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 12007476218364449196ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2047719410 : 2048028513;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 12514872027439254331ULL : 4566134258520351308ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (signed char)18 : (signed char)9;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
