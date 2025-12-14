#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 565781860871533056LL;
unsigned int var_8 = 2083410243U;
unsigned int var_9 = 3635071094U;
unsigned int var_10 = 3971551392U;
unsigned short var_11 = (unsigned short)60481;
long long int var_12 = -3790011099563518210LL;
unsigned int var_18 = 1053008331U;
int zero = 0;
unsigned int var_20 = 3449072047U;
unsigned int var_21 = 3510750703U;
unsigned int var_22 = 4097847864U;
unsigned short var_23 = (unsigned short)1860;
unsigned short var_24 = (unsigned short)26867;
unsigned int var_25 = 195438825U;
unsigned int var_26 = 3370902600U;
unsigned short var_27 = (unsigned short)1519;
unsigned short var_28 = (unsigned short)24946;
unsigned short var_29 = (unsigned short)58166;
unsigned short var_30 = (unsigned short)32184;
unsigned int var_31 = 1711714224U;
unsigned short var_32 = (unsigned short)25881;
unsigned int var_33 = 3325555603U;
unsigned int var_34 = 2559628957U;
long long int var_35 = 5149469100650581012LL;
unsigned short var_36 = (unsigned short)19402;
unsigned short arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_3 [22] [22] [22] ;
unsigned short arr_6 [22] [22] ;
unsigned int arr_10 [25] ;
unsigned short arr_12 [25] ;
unsigned short arr_15 [25] [25] [25] ;
unsigned int arr_17 [25] ;
unsigned short arr_19 [25] [25] [25] ;
unsigned int arr_16 [25] ;
unsigned int arr_20 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)48099;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 205782817U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4259863565U : 451218313U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8842 : (unsigned short)2103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1019833301U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)33375;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)2020;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 2051397646U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)61834;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 3175412767U : 214466695U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 1743113487U : 3029020432U;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
