#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3173235648U;
unsigned long long int var_6 = 10565185671460558483ULL;
unsigned long long int var_7 = 2409620502963762431ULL;
unsigned int var_10 = 3438634373U;
unsigned int var_11 = 1163315514U;
unsigned int var_12 = 167929043U;
int zero = 0;
unsigned long long int var_13 = 17728708138776731195ULL;
unsigned long long int var_14 = 10533983005764487365ULL;
unsigned int var_15 = 3977775151U;
unsigned long long int var_16 = 1449077249222803141ULL;
unsigned int var_17 = 661049046U;
unsigned int var_18 = 563408201U;
unsigned long long int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 12157887910974011506ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11867603128373587975ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2213879788U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3122646745U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 9621971024122567947ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 9590251003722072741ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1892086150039672535ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
