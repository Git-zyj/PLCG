#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
int var_1 = -461337044;
int var_2 = 1922584634;
unsigned char var_3 = (unsigned char)126;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1660883957U;
unsigned char var_6 = (unsigned char)94;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 1789651526567196667ULL;
unsigned long long int var_10 = 11795593577581172044ULL;
unsigned long long int var_11 = 12887724215530300643ULL;
int zero = 0;
long long int var_12 = 1219315799930064230LL;
_Bool var_13 = (_Bool)1;
int var_14 = 2056777135;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)242;
unsigned long long int var_17 = 15666374504850806796ULL;
short var_18 = (short)10581;
unsigned int var_19 = 149251895U;
int var_20 = 1235118517;
unsigned int var_21 = 1112930532U;
unsigned char var_22 = (unsigned char)72;
unsigned char var_23 = (unsigned char)112;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-17835;
unsigned int var_26 = 1876051638U;
unsigned int var_27 = 1670220387U;
long long int var_28 = -131006969302214228LL;
unsigned int var_29 = 4027300525U;
signed char var_30 = (signed char)99;
signed char var_31 = (signed char)-81;
signed char var_32 = (signed char)-100;
long long int var_33 = -7223380657970868102LL;
signed char var_34 = (signed char)-104;
unsigned char var_35 = (unsigned char)10;
unsigned char var_36 = (unsigned char)72;
unsigned char var_37 = (unsigned char)163;
unsigned long long int var_38 = 14535432073588526009ULL;
unsigned char var_39 = (unsigned char)5;
int var_40 = -2133147234;
unsigned char var_41 = (unsigned char)190;
unsigned char var_42 = (unsigned char)97;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
signed char arr_5 [23] [23] [23] [23] ;
unsigned int arr_10 [23] [23] ;
unsigned char arr_14 [23] [23] [23] [23] ;
unsigned int arr_18 [23] [23] [23] [23] ;
unsigned char arr_22 [23] [23] [23] [23] [23] ;
short arr_23 [23] [23] [23] [23] [23] [23] [23] ;
unsigned int arr_29 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 821034980U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4024236979U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 852258899U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 4231957378U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (short)-13494 : (short)-24174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 3432448266U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
