#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 612996819U;
long long int var_3 = 6199527627990680848LL;
unsigned int var_4 = 1569828119U;
unsigned int var_6 = 3899902199U;
unsigned long long int var_7 = 11427716547410592353ULL;
unsigned long long int var_8 = 6593381540798071979ULL;
int zero = 0;
unsigned int var_11 = 2463458918U;
unsigned int var_12 = 3332668520U;
unsigned short var_13 = (unsigned short)4473;
unsigned short var_14 = (unsigned short)23552;
unsigned long long int var_15 = 6992824891737894878ULL;
unsigned int var_16 = 2096281189U;
unsigned short var_17 = (unsigned short)25310;
unsigned long long int var_18 = 13584578336016843501ULL;
long long int var_19 = -9206252375288732626LL;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
unsigned int arr_3 [13] ;
long long int arr_4 [13] ;
unsigned short arr_8 [13] [13] [13] ;
unsigned int arr_11 [20] ;
unsigned int arr_12 [20] [20] ;
unsigned int arr_5 [13] [13] ;
unsigned int arr_10 [13] [13] [13] ;
unsigned int arr_13 [20] ;
long long int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 984726934U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3801277871U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3278290072U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -7684899322010336823LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)11081;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 3645247729U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 616068236U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3192104010U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2902460091U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 2587670262U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = -2396750323839955605LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
