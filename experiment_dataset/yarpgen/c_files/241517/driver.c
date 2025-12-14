#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4345129674376279269LL;
int var_2 = -695877775;
int var_4 = 364017106;
unsigned long long int var_5 = 611175011327053146ULL;
long long int var_6 = 8939488889802566552LL;
unsigned char var_7 = (unsigned char)46;
_Bool var_9 = (_Bool)1;
short var_10 = (short)7364;
unsigned long long int var_11 = 16365238367103325673ULL;
unsigned char var_12 = (unsigned char)236;
unsigned int var_13 = 1019472039U;
short var_14 = (short)-21182;
int zero = 0;
int var_15 = 805321940;
unsigned char var_16 = (unsigned char)160;
_Bool var_17 = (_Bool)1;
int var_18 = 1144831733;
long long int var_19 = 7749287907393545801LL;
unsigned long long int var_20 = 2490783213816871407ULL;
long long int var_21 = 7316804848449463087LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 8477148532701221486ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = 2368310545169076603LL;
long long int var_26 = -5898926845385079982LL;
long long int var_27 = -4338367379133292520LL;
short var_28 = (short)-12740;
long long int arr_0 [23] [23] ;
short arr_1 [23] [23] ;
short arr_2 [12] ;
_Bool arr_3 [12] ;
short arr_4 [12] [12] ;
unsigned long long int arr_8 [18] [18] ;
int arr_11 [18] ;
int arr_12 [18] [18] ;
_Bool arr_13 [18] ;
long long int arr_15 [18] [18] [18] [18] ;
unsigned char arr_16 [18] [18] [18] [18] [18] ;
long long int arr_20 [25] ;
unsigned long long int arr_21 [25] ;
unsigned short arr_22 [25] [25] ;
_Bool arr_26 [21] [21] ;
signed char arr_17 [18] [18] [18] [18] ;
long long int arr_18 [18] ;
short arr_19 [18] [18] ;
short arr_23 [25] [25] ;
_Bool arr_24 [25] [25] ;
signed char arr_27 [21] ;
unsigned short arr_30 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -8829765250670553120LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-29639;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-9610;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-31805;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 872695866055185277ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1229483013;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 918752039;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 7089401184851514869LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -4239918941703582068LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 15864744751037800598ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)9949;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -6153991292222349793LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (short)7244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_23 [i_0] [i_1] = (short)-7677;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)45559;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
