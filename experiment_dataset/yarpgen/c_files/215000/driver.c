#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 924657591U;
unsigned long long int var_2 = 6469886915566810408ULL;
int var_3 = -1475774929;
unsigned int var_4 = 3862997049U;
unsigned short var_5 = (unsigned short)37354;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)61;
unsigned int var_9 = 851122363U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)20030;
signed char var_12 = (signed char)100;
long long int var_15 = -2353167253845522077LL;
signed char var_16 = (signed char)97;
int zero = 0;
unsigned int var_17 = 1478027269U;
unsigned long long int var_18 = 10435660990635393017ULL;
unsigned long long int var_19 = 7476652151594621195ULL;
unsigned short var_20 = (unsigned short)61888;
unsigned int var_21 = 3648313288U;
unsigned int var_22 = 634287274U;
unsigned char var_23 = (unsigned char)99;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2781928929U;
unsigned long long int var_26 = 7164440033544592884ULL;
unsigned long long int var_27 = 13409039796719766907ULL;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 1894635778U;
unsigned short var_31 = (unsigned short)14417;
unsigned short var_32 = (unsigned short)13625;
signed char var_33 = (signed char)111;
unsigned char var_34 = (unsigned char)154;
unsigned long long int var_35 = 9501168140665491010ULL;
unsigned int var_36 = 2691465255U;
_Bool var_37 = (_Bool)0;
short var_38 = (short)-16408;
unsigned long long int var_39 = 18056406757897647911ULL;
short var_40 = (short)12657;
unsigned short var_41 = (unsigned short)39633;
unsigned long long int arr_0 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] [21] [21] ;
unsigned short arr_11 [15] ;
unsigned char arr_12 [15] [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] [15] ;
unsigned long long int arr_19 [15] [15] [15] [15] [15] ;
_Bool arr_25 [15] [15] [15] [15] [15] ;
unsigned int arr_26 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 16948948363040056219ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2884100392U : 4064463871U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 6837613980787442302ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 17813141626171351659ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1356529473643570885ULL : 1373893702295687820ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 964128358929545130ULL : 14443915872934464108ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)46306;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 9213478476423002970ULL : 15139811881381076417ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 754017955U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
