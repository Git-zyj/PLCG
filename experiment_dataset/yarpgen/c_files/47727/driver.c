#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 455002889;
unsigned long long int var_2 = 3650318571906156358ULL;
unsigned short var_3 = (unsigned short)64851;
signed char var_4 = (signed char)116;
long long int var_5 = 8451234080397177168LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)51533;
unsigned short var_8 = (unsigned short)43030;
int var_10 = -1415256317;
unsigned int var_13 = 4275030949U;
int zero = 0;
unsigned int var_15 = 1788259702U;
signed char var_16 = (signed char)23;
unsigned int var_17 = 4077891000U;
int var_18 = -1951717267;
unsigned int var_19 = 3247980187U;
int var_20 = -370514182;
unsigned int var_21 = 720245964U;
long long int var_22 = -8980265545681809579LL;
unsigned long long int var_23 = 4086866883067095352ULL;
int var_24 = -259228400;
unsigned char var_25 = (unsigned char)190;
long long int var_26 = 4742074832620273367LL;
unsigned int var_27 = 963454554U;
unsigned int arr_0 [20] ;
long long int arr_1 [20] ;
short arr_2 [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned int arr_7 [13] ;
unsigned int arr_9 [13] ;
unsigned long long int arr_11 [23] [23] ;
long long int arr_3 [20] ;
int arr_4 [20] ;
unsigned char arr_13 [23] ;
int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3039267164U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5713388135137964890LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)9841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1552193234536841335LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2254093435U : 1341239950U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 4037314302U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 2432055657476915771ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -8034752086623714178LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -440645797;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -1400107874;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
