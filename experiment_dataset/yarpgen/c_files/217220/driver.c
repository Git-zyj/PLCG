#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14083;
_Bool var_2 = (_Bool)0;
short var_3 = (short)4108;
unsigned int var_4 = 2354633144U;
unsigned short var_5 = (unsigned short)34899;
short var_6 = (short)32479;
unsigned int var_7 = 2308919198U;
unsigned short var_8 = (unsigned short)3702;
short var_10 = (short)4996;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-14921;
short var_15 = (short)-6506;
short var_16 = (short)230;
long long int var_18 = -6730033278792628780LL;
unsigned long long int var_19 = 17449202733665924345ULL;
int zero = 0;
unsigned int var_20 = 3022407285U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1261017411069300559ULL;
unsigned int var_23 = 3028482142U;
unsigned int var_24 = 1469197612U;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
long long int var_27 = 104132332877291960LL;
unsigned short var_28 = (unsigned short)22634;
short arr_0 [12] ;
long long int arr_1 [12] ;
unsigned int arr_5 [12] ;
signed char arr_6 [12] ;
unsigned int arr_7 [12] ;
unsigned long long int arr_8 [11] ;
short arr_10 [11] [11] [11] ;
_Bool arr_12 [11] ;
unsigned int arr_2 [12] ;
unsigned int arr_3 [12] ;
short arr_4 [12] [12] ;
unsigned short arr_13 [11] [11] ;
unsigned int arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-7057;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2872441105887978486LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3592451585U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 579023697U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 5556431934446078561ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-5442 : (short)-30219;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4287991676U : 2305645326U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1143876170U : 457294012U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18211 : (short)21261;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38514 : (unsigned short)55655;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 4197207549U : 3858856128U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
