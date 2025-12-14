#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28711;
unsigned long long int var_2 = 17071953771558065389ULL;
unsigned char var_3 = (unsigned char)142;
short var_4 = (short)-10082;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)195;
int zero = 0;
int var_12 = -514253024;
short var_13 = (short)3577;
unsigned int var_14 = 29216668U;
short var_15 = (short)-14708;
unsigned short var_16 = (unsigned short)2063;
short var_17 = (short)-8449;
_Bool var_18 = (_Bool)1;
short arr_0 [14] [14] ;
short arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned short arr_4 [14] ;
unsigned int arr_7 [24] [24] ;
unsigned short arr_8 [24] ;
short arr_9 [24] [24] ;
unsigned int arr_14 [24] ;
unsigned long long int arr_17 [24] [24] [24] [24] ;
unsigned int arr_22 [24] ;
short arr_3 [14] ;
short arr_6 [14] ;
unsigned short arr_10 [24] [24] ;
short arr_11 [24] ;
unsigned int arr_12 [24] ;
unsigned long long int arr_19 [24] [24] [24] ;
unsigned short arr_20 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22667;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-21125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 15160722658313081412ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)61248;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 2109076639U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)58470;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-26019;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 1228316703U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 9494075830162442409ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 208441029U : 1317100531U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-32760;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)-6635;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)50055;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)-10393;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 3767685367U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 8162773872845445532ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)38752;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
