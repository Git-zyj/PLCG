#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
int var_1 = 449873930;
unsigned char var_3 = (unsigned char)48;
long long int var_5 = 1454094322811210024LL;
unsigned short var_6 = (unsigned short)41080;
long long int var_7 = -2598115161771262223LL;
unsigned char var_9 = (unsigned char)189;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)132;
short var_12 = (short)22617;
unsigned long long int var_13 = 1942404200147596924ULL;
unsigned short var_14 = (unsigned short)32449;
unsigned char var_16 = (unsigned char)213;
unsigned long long int var_17 = 6017422803930711358ULL;
int zero = 0;
unsigned long long int var_19 = 1932816760231501474ULL;
unsigned char var_20 = (unsigned char)134;
unsigned long long int var_21 = 9491088446996054272ULL;
unsigned char var_22 = (unsigned char)91;
short var_23 = (short)28786;
unsigned char var_24 = (unsigned char)183;
short var_25 = (short)32279;
unsigned long long int var_26 = 2853575868526671571ULL;
unsigned short var_27 = (unsigned short)5893;
unsigned long long int var_28 = 3507026705162045215ULL;
unsigned long long int var_29 = 14596312663909852214ULL;
long long int var_30 = -2058204211190274513LL;
unsigned short var_31 = (unsigned short)8227;
short var_32 = (short)12017;
unsigned long long int var_33 = 5343671037802294982ULL;
short var_34 = (short)16513;
unsigned long long int var_35 = 2063160724060586078ULL;
unsigned short var_36 = (unsigned short)57677;
int var_37 = -1749546205;
unsigned char var_38 = (unsigned char)26;
unsigned short var_39 = (unsigned short)25214;
long long int arr_2 [19] ;
unsigned char arr_4 [21] ;
unsigned long long int arr_5 [21] ;
long long int arr_7 [21] [21] ;
unsigned int arr_8 [21] [21] ;
unsigned long long int arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_12 [21] [21] [21] ;
long long int arr_15 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_16 [21] [21] [21] [21] ;
unsigned long long int arr_24 [21] [21] [21] [21] ;
unsigned char arr_25 [21] ;
unsigned char arr_26 [21] ;
long long int arr_27 [21] [21] [21] ;
unsigned long long int arr_29 [21] [21] ;
unsigned char arr_33 [21] [21] ;
unsigned short arr_37 [13] ;
unsigned short arr_40 [21] [21] ;
short arr_41 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4829723635633295106LL : 1218735528645763289LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 14983408619266303084ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 8463461811204874275LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 470910962U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 15873766710507216749ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6684949354544786096ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -7125359020178565644LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 16934506986893029732ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -640538195116164254LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = 13888984122850698117ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_37 [i_0] = (unsigned short)20676;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35179 : (unsigned short)41966;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (short)-31391 : (short)-974;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
