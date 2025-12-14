#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
long long int var_1 = 6481504847426855604LL;
long long int var_2 = -7173658526410569263LL;
short var_3 = (short)25153;
unsigned short var_4 = (unsigned short)46489;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)33878;
unsigned int var_7 = 491179522U;
unsigned int var_8 = 285962311U;
short var_9 = (short)7984;
unsigned short var_10 = (unsigned short)35015;
int zero = 0;
unsigned short var_11 = (unsigned short)4671;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)50859;
unsigned long long int var_14 = 4755937248600847880ULL;
short var_15 = (short)-3169;
_Bool var_16 = (_Bool)0;
long long int var_17 = 1322599825734957500LL;
short var_18 = (short)21554;
unsigned int var_19 = 907483192U;
unsigned long long int var_20 = 12629903920155590363ULL;
int var_21 = -692310854;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
int var_24 = -649891250;
long long int var_25 = 8733292499397641357LL;
signed char var_26 = (signed char)-49;
unsigned short var_27 = (unsigned short)41055;
int var_28 = 1245308036;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 185302827U;
unsigned int var_31 = 1246769868U;
int var_32 = -1302720373;
signed char var_33 = (signed char)-114;
unsigned long long int var_34 = 5489165439621526971ULL;
long long int var_35 = -2602434396042538766LL;
long long int var_36 = -4012377401916218850LL;
int var_37 = 1289820583;
unsigned short var_38 = (unsigned short)32848;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 16152302779401194414ULL;
int var_41 = -453801865;
int var_42 = 695474954;
unsigned short var_43 = (unsigned short)50063;
unsigned int arr_1 [13] ;
unsigned int arr_2 [13] ;
int arr_3 [13] ;
unsigned short arr_5 [13] [13] ;
unsigned short arr_6 [13] [13] [13] ;
signed char arr_7 [13] [13] [13] ;
int arr_9 [13] [13] ;
short arr_10 [13] [13] [13] ;
unsigned int arr_15 [13] ;
unsigned int arr_21 [13] [13] [13] ;
unsigned long long int arr_29 [20] ;
unsigned int arr_31 [20] ;
unsigned short arr_32 [20] ;
unsigned int arr_38 [24] ;
long long int arr_39 [24] ;
int arr_40 [24] [24] ;
int arr_41 [24] [24] ;
_Bool arr_4 [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
unsigned short arr_33 [20] ;
signed char arr_34 [20] [20] ;
long long int arr_48 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4014506919U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 4067084409U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -198674056;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)45014;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)9585 : (unsigned short)9481;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -611636867 : 1476022435;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)10751 : (short)-7497;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 3622889704U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 4122225715U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = 4559028968079630468ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 3865354151U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (unsigned short)63330;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = 2655993689U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = 3124007245221293304LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_40 [i_0] [i_1] = -1526967225;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_41 [i_0] [i_1] = -1429478305;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1516095440357645571ULL : 5291207730267519756ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (unsigned short)25479;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_48 [i_0] = 8869042024240643670LL;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
