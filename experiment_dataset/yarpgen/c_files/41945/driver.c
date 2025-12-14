#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6469;
short var_2 = (short)-19903;
long long int var_3 = 5824637831744308453LL;
unsigned long long int var_4 = 8646572526460703938ULL;
int var_5 = 111792956;
int var_6 = 578010967;
long long int var_7 = -8934835160676427620LL;
signed char var_8 = (signed char)-25;
signed char var_9 = (signed char)-111;
long long int var_10 = -2605527013350785960LL;
unsigned long long int var_11 = 13750885264239610501ULL;
int zero = 0;
short var_12 = (short)28260;
unsigned long long int var_13 = 17808283931489111295ULL;
unsigned char var_14 = (unsigned char)228;
unsigned char var_15 = (unsigned char)89;
unsigned char var_16 = (unsigned char)88;
long long int var_17 = -1603107809860118493LL;
unsigned long long int var_18 = 7678106902701183726ULL;
short var_19 = (short)8901;
unsigned long long int var_20 = 2391765739631582821ULL;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
short arr_3 [18] [18] [18] ;
_Bool arr_5 [18] ;
_Bool arr_8 [19] ;
signed char arr_10 [19] ;
long long int arr_4 [18] ;
long long int arr_7 [18] [18] ;
long long int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1326801131565286985ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5402961398728927391ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)9687;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -8584299339765006457LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -5512467388207319780LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -3091821123269063582LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
