#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16530470607575378884ULL;
_Bool var_1 = (_Bool)1;
long long int var_5 = -3931014460900940644LL;
signed char var_6 = (signed char)-1;
unsigned int var_9 = 1201655306U;
short var_10 = (short)-6652;
_Bool var_11 = (_Bool)0;
int var_12 = -1296638613;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41044;
unsigned long long int var_15 = 7229087117654473085ULL;
unsigned long long int var_16 = 14589707535730312628ULL;
unsigned int var_18 = 2057468906U;
int zero = 0;
unsigned int var_19 = 2572139834U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12526897123588429809ULL;
unsigned char var_22 = (unsigned char)90;
long long int var_23 = -5176921496563976788LL;
unsigned long long int var_24 = 2137556550952835571ULL;
unsigned int var_25 = 3564896175U;
unsigned char var_26 = (unsigned char)113;
int var_27 = -2124515576;
unsigned long long int var_28 = 3300227630362559584ULL;
short var_29 = (short)-11259;
signed char var_30 = (signed char)-63;
unsigned char var_31 = (unsigned char)141;
unsigned int var_32 = 1533345374U;
unsigned char var_33 = (unsigned char)225;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 3616414321U;
signed char var_37 = (signed char)74;
unsigned int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_3 [20] [20] ;
unsigned char arr_5 [20] ;
unsigned char arr_6 [20] ;
unsigned char arr_7 [20] ;
unsigned int arr_9 [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
int arr_12 [20] [20] ;
unsigned short arr_14 [20] [20] [20] ;
signed char arr_15 [20] ;
unsigned int arr_16 [20] [20] [20] [20] [20] ;
unsigned short arr_17 [20] [20] [20] [20] [20] ;
unsigned short arr_30 [20] [20] [20] ;
unsigned long long int arr_4 [20] ;
long long int arr_11 [20] [20] ;
int arr_19 [20] [20] [20] [20] ;
unsigned long long int arr_20 [20] [20] [20] [20] ;
signed char arr_28 [20] [20] [20] ;
unsigned short arr_31 [20] [20] ;
signed char arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3339655289U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3590230749160192103ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)23569;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1335991875U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 430006514U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 15540846874534569900ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = -126767535;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)36527 : (unsigned short)26493;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2184326278U : 3171950412U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)54983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)23415;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16669652937361467146ULL : 10629685012658623315ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1828534479707193104LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1209020608 : -474616610;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4312773443609187932ULL : 12966443500072310451ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)48 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)33886;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (signed char)-24;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
