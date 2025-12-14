#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16250;
long long int var_1 = 2609575200737632075LL;
unsigned long long int var_2 = 3208936871861919106ULL;
unsigned char var_3 = (unsigned char)159;
signed char var_4 = (signed char)-87;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3053510108003295540LL;
short var_7 = (short)21634;
unsigned short var_8 = (unsigned short)25775;
unsigned int var_9 = 3507283140U;
unsigned short var_10 = (unsigned short)46247;
signed char var_11 = (signed char)63;
unsigned int var_12 = 3560029330U;
unsigned char var_13 = (unsigned char)187;
short var_14 = (short)-8557;
int zero = 0;
long long int var_15 = 4031581781549232415LL;
long long int var_16 = -7837366780763507624LL;
unsigned int var_17 = 2478118071U;
unsigned short var_18 = (unsigned short)38279;
unsigned int var_19 = 1763949691U;
signed char var_20 = (signed char)69;
unsigned int var_21 = 3237737670U;
long long int var_22 = -9184325824360017364LL;
signed char var_23 = (signed char)11;
unsigned char var_24 = (unsigned char)253;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 910410162090165445ULL;
unsigned char var_27 = (unsigned char)208;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-11027;
int var_30 = 2005727087;
int var_31 = -1863127843;
short var_32 = (short)-11911;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
short arr_2 [25] ;
signed char arr_4 [11] [11] ;
unsigned int arr_5 [11] ;
unsigned short arr_17 [18] [18] [18] [18] [18] ;
unsigned short arr_18 [18] [18] [18] [18] [18] ;
short arr_19 [22] [22] ;
unsigned long long int arr_23 [22] [22] ;
unsigned int arr_24 [22] ;
unsigned long long int arr_27 [22] [22] [22] ;
long long int arr_30 [22] [22] [22] ;
signed char arr_33 [22] [22] [22] ;
unsigned long long int arr_6 [11] [11] ;
short arr_7 [11] ;
signed char arr_25 [22] [22] [22] ;
unsigned long long int arr_26 [22] ;
short arr_29 [22] [22] ;
unsigned char arr_34 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)36166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3017766733900507248ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-13839;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3719570750U : 1981265748U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)29097;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37156;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (short)10090;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = 6332206021095610840ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 4116286682U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 1145163576067524572ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 659340305130532667LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 6913228323956930507ULL : 15330416246531375818ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-13466 : (short)-18701;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = 6972808072227507178ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (short)-16980;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)10;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
