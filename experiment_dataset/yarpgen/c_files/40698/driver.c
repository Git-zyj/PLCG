#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57295;
short var_2 = (short)27389;
short var_3 = (short)-9078;
short var_5 = (short)-20799;
unsigned int var_7 = 2259324636U;
unsigned int var_8 = 582014304U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 777466495U;
int zero = 0;
short var_12 = (short)28937;
unsigned int var_13 = 144030957U;
unsigned short var_14 = (unsigned short)34934;
unsigned char var_15 = (unsigned char)98;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-22206;
unsigned short var_18 = (unsigned short)25743;
unsigned long long int var_19 = 10765815048989368131ULL;
unsigned int var_20 = 3321059454U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2697521691U;
short arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_10 [22] ;
_Bool arr_11 [22] ;
unsigned short arr_6 [23] ;
unsigned short arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4085474000U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 5013555042703465284ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)44316;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)46446;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
