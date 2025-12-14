#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22591;
int var_1 = -1012431171;
unsigned char var_2 = (unsigned char)125;
unsigned short var_3 = (unsigned short)25418;
signed char var_5 = (signed char)-48;
unsigned char var_6 = (unsigned char)193;
short var_7 = (short)-30505;
short var_8 = (short)-23993;
long long int var_9 = 8583297588834069363LL;
unsigned int var_10 = 4065185345U;
signed char var_11 = (signed char)-52;
unsigned short var_12 = (unsigned short)3088;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-23847;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2981001935U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32655;
int var_21 = -1309153953;
_Bool var_22 = (_Bool)0;
short var_23 = (short)21834;
signed char var_24 = (signed char)-49;
int var_25 = 1325183497;
int var_26 = 275084547;
signed char var_27 = (signed char)75;
unsigned char var_28 = (unsigned char)157;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-18649;
unsigned short var_32 = (unsigned short)32480;
long long int var_33 = 8165165622570300428LL;
unsigned short var_34 = (unsigned short)22767;
int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_4 [14] [14] ;
_Bool arr_5 [14] [14] ;
_Bool arr_7 [14] ;
short arr_11 [14] [14] [14] [14] ;
unsigned short arr_12 [14] [14] [14] [14] ;
signed char arr_13 [14] [14] [14] [14] ;
short arr_14 [14] [14] [14] [14] ;
unsigned char arr_15 [14] [14] [14] ;
long long int arr_16 [14] [14] ;
int arr_17 [14] [14] [14] [14] ;
long long int arr_26 [14] [14] [14] ;
int arr_28 [14] ;
_Bool arr_3 [18] ;
unsigned short arr_8 [14] ;
unsigned short arr_18 [14] [14] [14] [14] ;
short arr_21 [14] ;
signed char arr_22 [14] [14] [14] ;
unsigned long long int arr_23 [14] ;
long long int arr_38 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -162383176;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9960496084030082884ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-10760;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)20364 : (short)-17160;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)30796;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-8959 : (short)-1102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)5 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 274622202562378875LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 880912535 : 1583165991;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 9155916475536495073LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = -936534605;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22143 : (unsigned short)28219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)16961 : (unsigned short)38988;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)-25281 : (short)11046;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-116 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 4376072008042422917ULL : 1147751001965108733ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -8978892523003184822LL : -4405294267836470750LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
