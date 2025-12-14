#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned long long int var_1 = 16533653715670762547ULL;
int var_2 = -681653238;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-97;
short var_5 = (short)14126;
unsigned int var_6 = 1640047352U;
unsigned int var_7 = 1037548376U;
unsigned long long int var_8 = 9433041744322721678ULL;
signed char var_9 = (signed char)121;
signed char var_11 = (signed char)9;
unsigned short var_12 = (unsigned short)39957;
unsigned short var_13 = (unsigned short)25361;
int zero = 0;
unsigned int var_14 = 2476608310U;
unsigned long long int var_15 = 4371611580855767539ULL;
signed char var_16 = (signed char)-24;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-26574;
unsigned int var_19 = 2587849724U;
short var_20 = (short)-24216;
unsigned int var_21 = 704953272U;
signed char var_22 = (signed char)38;
unsigned short var_23 = (unsigned short)34655;
unsigned long long int var_24 = 15988812591381713813ULL;
unsigned int var_25 = 2479592882U;
unsigned short var_26 = (unsigned short)19541;
short var_27 = (short)8393;
unsigned long long int var_28 = 14734659848798338269ULL;
short var_29 = (short)-16053;
long long int var_30 = 1056679589246187171LL;
short var_31 = (short)-12091;
int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
_Bool arr_5 [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
unsigned short arr_7 [17] [17] ;
unsigned short arr_9 [17] [17] [17] [17] [17] ;
unsigned short arr_10 [17] ;
unsigned int arr_13 [11] ;
_Bool arr_17 [11] [11] ;
unsigned short arr_25 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1236215147;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 314112739U : 3468400831U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)44471;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)34623 : (unsigned short)42415;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33990 : (unsigned short)58672;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 2661879980U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)18260;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
