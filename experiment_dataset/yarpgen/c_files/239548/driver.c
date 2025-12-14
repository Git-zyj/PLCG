#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18446;
unsigned int var_1 = 3397738230U;
short var_3 = (short)-2236;
unsigned long long int var_4 = 15067438019815688605ULL;
short var_5 = (short)-8061;
signed char var_6 = (signed char)14;
signed char var_7 = (signed char)56;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9414433398002895047ULL;
int zero = 0;
int var_11 = -260574166;
unsigned int var_12 = 2897614474U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)0;
signed char var_15 = (signed char)-70;
unsigned long long int var_16 = 1640130268417195780ULL;
int var_17 = -1223278894;
unsigned int var_18 = 2100510876U;
signed char var_19 = (signed char)-75;
unsigned int var_20 = 2126816632U;
unsigned int var_21 = 1688012100U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)17;
unsigned int var_24 = 3194293485U;
unsigned long long int var_25 = 8393219439277651588ULL;
unsigned int var_26 = 4055543462U;
short var_27 = (short)-12840;
int var_28 = 1057811996;
signed char var_29 = (signed char)57;
unsigned int var_30 = 266972392U;
_Bool var_31 = (_Bool)0;
int var_32 = -16860373;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)89;
unsigned int var_35 = 2917931783U;
short var_36 = (short)-24050;
unsigned int var_37 = 892610636U;
unsigned int var_38 = 3294091376U;
short var_39 = (short)-7484;
signed char var_40 = (signed char)110;
short arr_1 [10] ;
unsigned int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
short arr_6 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
unsigned long long int arr_9 [21] [21] [21] [21] ;
int arr_11 [21] [21] [21] ;
short arr_12 [21] [21] [21] ;
signed char arr_15 [21] [21] [21] ;
_Bool arr_17 [21] [21] ;
short arr_18 [21] [21] [21] [21] ;
unsigned int arr_19 [21] [21] [21] ;
signed char arr_21 [21] [21] [21] [21] ;
_Bool arr_28 [21] ;
int arr_2 [10] ;
unsigned int arr_43 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)29817;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1482066461U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2289874300424685074ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)28561 : (short)-23186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 800535356U : 271474385U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 12121187481008605199ULL : 8671135041201861840ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 316738990;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-29336;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-19135;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3331486067U : 1984093582U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 322334167;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 2375682731U : 3247888193U;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
