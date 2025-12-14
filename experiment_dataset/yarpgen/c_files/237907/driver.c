#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2874;
unsigned int var_2 = 1426544299U;
int var_3 = -87383040;
int var_4 = -1888949160;
unsigned int var_5 = 2438256477U;
unsigned int var_6 = 248316165U;
short var_7 = (short)-12006;
unsigned int var_9 = 1215387705U;
int zero = 0;
short var_11 = (short)-11281;
short var_12 = (short)-2754;
short var_13 = (short)-25696;
short var_14 = (short)6975;
short var_15 = (short)-11220;
int var_16 = 1832117101;
int var_17 = -2035762664;
int var_18 = -1506189611;
int var_19 = -693809305;
unsigned int var_20 = 2259309952U;
int var_21 = 901340148;
unsigned int var_22 = 342006559U;
short var_23 = (short)18101;
int arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
int arr_3 [19] ;
unsigned int arr_11 [22] [22] ;
unsigned int arr_14 [22] [22] [22] ;
short arr_25 [24] ;
int arr_26 [24] ;
unsigned int arr_27 [24] [24] [24] ;
unsigned int arr_31 [24] [24] [24] ;
int arr_8 [19] [19] [19] [19] ;
short arr_12 [22] [22] ;
short arr_20 [22] ;
int arr_21 [22] ;
int arr_28 [24] [24] [24] ;
short arr_29 [24] ;
unsigned int arr_32 [24] ;
short arr_33 [24] ;
int arr_34 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1151203733;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2650344719U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1206819710;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 4098822781U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1587916097U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (short)1961;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 1709681365;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 3913517026U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 2856400182U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 786305181 : 932277467;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-2191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)22362 : (short)-3194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 292186867 : 343338236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -156433636;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (short)-13886;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 4260574886U : 1707298754U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (short)-26511;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 729306842;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
