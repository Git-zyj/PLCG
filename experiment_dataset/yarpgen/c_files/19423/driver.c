#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6100;
signed char var_1 = (signed char)-42;
unsigned long long int var_2 = 17557502662781339868ULL;
long long int var_3 = -3118965084000845131LL;
unsigned long long int var_4 = 1338838687973595363ULL;
unsigned int var_5 = 1620671058U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)30411;
short var_9 = (short)-29013;
short var_10 = (short)31269;
int zero = 0;
short var_11 = (short)-20262;
long long int var_12 = -5195194956829259727LL;
short var_13 = (short)-13877;
int var_14 = -1265529264;
int var_15 = 1901940044;
long long int var_16 = -2530742805742266496LL;
unsigned int var_17 = 2375331123U;
signed char var_18 = (signed char)45;
int var_19 = -1042697357;
short var_20 = (short)28378;
unsigned long long int var_21 = 13415986257069480616ULL;
short var_22 = (short)-3100;
_Bool var_23 = (_Bool)0;
_Bool arr_2 [24] ;
long long int arr_7 [24] [24] [24] [24] ;
int arr_8 [24] [24] ;
long long int arr_21 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2008489052480371714LL : 207993299971413113LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1497858718 : 1983780308;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = 790260927398059154LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
