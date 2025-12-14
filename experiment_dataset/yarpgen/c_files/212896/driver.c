#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65359;
int var_1 = -91490876;
int var_2 = 739092515;
unsigned int var_3 = 1065407915U;
long long int var_6 = -5640096271200209868LL;
int zero = 0;
unsigned long long int var_10 = 2329275695434047945ULL;
signed char var_11 = (signed char)123;
signed char var_12 = (signed char)99;
signed char var_13 = (signed char)-74;
signed char var_14 = (signed char)-97;
signed char var_15 = (signed char)61;
long long int var_16 = 6575321275116893291LL;
short var_17 = (short)12836;
long long int var_18 = 8041122162425842257LL;
unsigned long long int var_19 = 1813048821729066975ULL;
unsigned int arr_6 [20] ;
_Bool arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2475904961U : 1379957762U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
