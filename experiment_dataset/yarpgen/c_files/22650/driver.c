#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5208;
unsigned long long int var_1 = 7155501719913964289ULL;
int var_4 = 1746293887;
int var_6 = 275248579;
unsigned char var_7 = (unsigned char)129;
unsigned long long int var_8 = 12377904588057692404ULL;
long long int var_9 = -9064553195157872813LL;
int zero = 0;
unsigned int var_10 = 2620077056U;
unsigned int var_11 = 1509204476U;
short var_12 = (short)-19946;
unsigned long long int var_13 = 17347885738592838837ULL;
int var_14 = -1182833065;
unsigned long long int var_15 = 14526128308222095911ULL;
int var_16 = 1247279555;
unsigned long long int var_17 = 6608827817258173392ULL;
int var_18 = 54115738;
unsigned int var_19 = 2123119720U;
unsigned long long int var_20 = 12023904964368805240ULL;
int var_21 = -1899162810;
int var_22 = 2146929522;
long long int var_23 = -8548162802574209226LL;
unsigned long long int arr_4 [17] [17] ;
long long int arr_10 [17] ;
int arr_20 [18] ;
signed char arr_24 [18] ;
int arr_26 [18] [18] ;
int arr_29 [18] [18] [18] ;
int arr_31 [18] [18] [18] ;
short arr_32 [18] [18] [18] [18] [18] ;
short arr_33 [18] [18] [18] [18] ;
int arr_39 [25] ;
int arr_40 [25] ;
unsigned long long int arr_43 [25] [25] [25] ;
int arr_5 [17] ;
int arr_17 [17] [17] [17] [17] [17] ;
int arr_18 [17] [17] [17] [17] [17] ;
short arr_19 [17] [17] ;
int arr_22 [18] ;
short arr_37 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 16839250994109535899ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 384124940572496843LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = -1384583300;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = -499776390;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1632503408 : 522431409;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -24446072 : 1092632764;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-6431 : (short)29854;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)20101 : (short)19353;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = 52065619;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = -638633359;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 7527938818035339234ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2137172358 : -656839550;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -842517394 : -1387769912;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1000652800 : -1650300080;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (short)1272;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = 435781398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_37 [i_0] = (short)-8614;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
