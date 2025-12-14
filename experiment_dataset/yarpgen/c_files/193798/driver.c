#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12769546339528822014ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)1349;
unsigned long long int var_4 = 8518671163984240595ULL;
long long int var_5 = 3302569017282309093LL;
unsigned long long int var_6 = 5355149321514141524ULL;
int var_8 = -1362448379;
unsigned int var_10 = 1912675171U;
unsigned long long int var_12 = 10483485476984587018ULL;
short var_14 = (short)12720;
unsigned int var_15 = 958713799U;
int var_16 = 529517503;
signed char var_17 = (signed char)-20;
int var_18 = -223732619;
int zero = 0;
int var_19 = 2115185738;
unsigned long long int var_20 = 11945079250839663485ULL;
short var_21 = (short)30358;
short var_22 = (short)-32023;
long long int var_23 = 5388388896030335572LL;
unsigned long long int var_24 = 2855502444049465783ULL;
unsigned char var_25 = (unsigned char)11;
unsigned char var_26 = (unsigned char)169;
int arr_7 [21] [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 425798367 : -1861416102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 3558251766U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10768789080608321092ULL : 4481114063028609114ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
