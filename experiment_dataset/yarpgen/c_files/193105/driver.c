#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1286357186635629290ULL;
int var_1 = -1723481817;
unsigned char var_2 = (unsigned char)180;
long long int var_3 = -3023311533395777743LL;
long long int var_4 = 760711644223331827LL;
unsigned long long int var_5 = 17749956380982806778ULL;
int var_6 = 521028632;
unsigned int var_7 = 3439089815U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8784028386270534225LL;
unsigned long long int var_10 = 12608754553219845629ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 18341654113047064030ULL;
unsigned int var_13 = 1969637545U;
unsigned int var_14 = 883451536U;
long long int var_15 = -218271588223887264LL;
int zero = 0;
unsigned char var_16 = (unsigned char)247;
_Bool var_17 = (_Bool)1;
int var_18 = -1127417686;
signed char var_19 = (signed char)108;
unsigned char var_20 = (unsigned char)243;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1621399871U;
long long int var_23 = -2797901485503807304LL;
int arr_0 [16] [16] ;
long long int arr_3 [16] [16] ;
_Bool arr_4 [16] [16] ;
int arr_5 [16] [16] [16] [16] ;
unsigned int arr_6 [16] ;
int arr_7 [16] [16] [16] [16] [16] ;
short arr_10 [16] [16] [16] [16] ;
unsigned long long int arr_11 [16] [16] ;
_Bool arr_13 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_14 [16] [16] [16] [16] [16] ;
unsigned long long int arr_18 [11] ;
unsigned long long int arr_20 [11] ;
signed char arr_21 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1884200744;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -2375681434043961264LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1282423835 : 363862687;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 44531619U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = -654437519;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-30187 : (short)-22196;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 2913937380720743509ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8234202555636404288ULL : 8518527374218365352ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = 7107285160400947007ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)94;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
