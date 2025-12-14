#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned short var_1 = (unsigned short)54558;
unsigned long long int var_2 = 6333777368501970990ULL;
unsigned int var_3 = 2490457458U;
int var_4 = 22343502;
int var_5 = -1586887813;
int var_6 = 494383541;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)125;
short var_9 = (short)-30864;
int zero = 0;
unsigned int var_10 = 3009396637U;
int var_11 = -186846900;
signed char var_12 = (signed char)71;
unsigned int var_13 = 383261695U;
int var_14 = -1364434176;
unsigned int var_15 = 3641946396U;
unsigned long long int var_16 = 1689109595718786533ULL;
signed char var_17 = (signed char)102;
unsigned int var_18 = 2090568978U;
signed char var_19 = (signed char)58;
int var_20 = -1789078350;
unsigned short var_21 = (unsigned short)56500;
signed char var_22 = (signed char)45;
unsigned char var_23 = (unsigned char)166;
int var_24 = -520008278;
unsigned char var_25 = (unsigned char)231;
unsigned short var_26 = (unsigned short)18946;
unsigned int var_27 = 1976823682U;
int var_28 = -560387906;
unsigned int var_29 = 1521755755U;
unsigned short var_30 = (unsigned short)15613;
signed char var_31 = (signed char)125;
unsigned int var_32 = 4153971605U;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 2819400824U;
unsigned int var_35 = 2530602821U;
short var_36 = (short)24387;
unsigned short var_37 = (unsigned short)15499;
signed char arr_0 [24] ;
signed char arr_2 [24] ;
int arr_3 [24] [24] [24] ;
unsigned short arr_4 [24] [24] [24] ;
signed char arr_5 [24] [24] ;
unsigned long long int arr_6 [24] [24] ;
short arr_7 [24] [24] ;
unsigned long long int arr_8 [24] ;
int arr_9 [24] ;
unsigned int arr_11 [17] ;
unsigned int arr_12 [17] [17] ;
signed char arr_14 [17] [17] ;
signed char arr_18 [17] [17] ;
signed char arr_20 [17] [17] [17] [17] ;
_Bool arr_21 [17] [17] [17] [17] ;
unsigned char arr_22 [17] [17] ;
signed char arr_10 [24] [24] ;
int arr_13 [17] ;
int arr_16 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -949269811 : 1701355508;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)60669;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)83 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1908249152333930168ULL : 4636158572463714061ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27742 : (short)-1216;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 16314996507901757519ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -1227516277;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 2306531884U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 2099062258U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-84 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = -1583892180;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 329717613;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
