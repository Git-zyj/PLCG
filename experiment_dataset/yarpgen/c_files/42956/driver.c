#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8825803352474391882LL;
unsigned long long int var_1 = 6422854929696079011ULL;
unsigned int var_6 = 1822197073U;
unsigned int var_7 = 1968817972U;
long long int var_10 = 733441833922296523LL;
unsigned short var_11 = (unsigned short)30681;
unsigned long long int var_15 = 10974031638472472958ULL;
unsigned int var_16 = 780198275U;
unsigned short var_17 = (unsigned short)64496;
int zero = 0;
unsigned int var_18 = 3308449954U;
unsigned int var_19 = 2052686331U;
long long int var_20 = 6016616414210720953LL;
unsigned int arr_1 [18] ;
unsigned short arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2461320585U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)17180;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2683659085U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
