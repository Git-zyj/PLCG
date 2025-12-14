#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2689477419U;
unsigned char var_2 = (unsigned char)19;
long long int var_4 = 2536016480373938358LL;
unsigned long long int var_5 = 14225712411777609508ULL;
long long int var_7 = -5052006330330292301LL;
short var_8 = (short)21102;
short var_9 = (short)-22988;
int var_10 = -734509565;
unsigned int var_11 = 4155374219U;
unsigned long long int var_12 = 771579458228965415ULL;
int zero = 0;
unsigned int var_13 = 1768713875U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-3904;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9329708702244848339ULL;
signed char var_18 = (signed char)97;
signed char var_19 = (signed char)126;
long long int var_20 = -8158334683742577397LL;
signed char var_21 = (signed char)71;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 464171411U;
unsigned char var_24 = (unsigned char)70;
unsigned int var_25 = 3817403574U;
int var_26 = 935661756;
short var_27 = (short)-25494;
unsigned long long int var_28 = 14706597124894078933ULL;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-10706;
signed char var_31 = (signed char)12;
signed char var_32 = (signed char)106;
short var_33 = (short)1573;
signed char var_34 = (signed char)81;
signed char var_35 = (signed char)71;
int var_36 = 1815844657;
signed char var_37 = (signed char)38;
unsigned int var_38 = 3339628191U;
unsigned int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned long long int arr_2 [19] [19] ;
short arr_3 [19] ;
unsigned char arr_6 [23] [23] ;
_Bool arr_7 [23] [23] ;
short arr_9 [24] ;
unsigned int arr_12 [24] ;
signed char arr_13 [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] ;
unsigned int arr_15 [24] ;
unsigned int arr_16 [24] [24] [24] [24] ;
unsigned int arr_17 [24] [24] ;
unsigned long long int arr_18 [24] [24] ;
signed char arr_23 [24] ;
unsigned long long int arr_4 [19] ;
short arr_5 [19] ;
unsigned int arr_25 [24] ;
long long int arr_26 [24] ;
unsigned long long int arr_31 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2557292605U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 16881458234094920128ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)17014;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)17834 : (short)-13973;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 387406801U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8594020138944853924ULL : 6856679051630591103ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1888055616U : 4261854542U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 246810402U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 3782814817U : 1401356939U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 459103525959135583ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 11389432127543085129ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-28476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 3615252107U : 3574646342U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -2170683021704713409LL : -8274002891249820158LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12110954994660649914ULL : 8597967869118338654ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
