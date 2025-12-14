#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3177613922422804028LL;
unsigned char var_1 = (unsigned char)174;
signed char var_4 = (signed char)12;
signed char var_6 = (signed char)72;
short var_8 = (short)-10710;
unsigned long long int var_10 = 15223375159242849330ULL;
unsigned long long int var_14 = 13174036704799743196ULL;
long long int var_16 = 1610495085937512089LL;
int zero = 0;
long long int var_17 = 2826049970864423285LL;
signed char var_18 = (signed char)85;
signed char var_19 = (signed char)-78;
unsigned int var_20 = 983158964U;
short var_21 = (short)-27165;
unsigned long long int arr_0 [23] [23] ;
long long int arr_5 [23] [23] [23] [23] ;
_Bool arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 4152754073710957133ULL : 13874906887616872111ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -3659189605576661540LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
