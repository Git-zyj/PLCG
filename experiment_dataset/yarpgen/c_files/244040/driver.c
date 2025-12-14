#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23359;
unsigned char var_1 = (unsigned char)111;
long long int var_2 = 1816875161367278462LL;
long long int var_3 = 4209574314272388380LL;
long long int var_4 = 8120811162278316500LL;
int var_5 = 1781027832;
signed char var_6 = (signed char)-118;
int var_7 = -880650516;
unsigned char var_9 = (unsigned char)23;
unsigned char var_12 = (unsigned char)137;
int zero = 0;
long long int var_13 = -3809709232061835653LL;
unsigned long long int var_14 = 11581794756945381382ULL;
signed char var_15 = (signed char)-81;
unsigned int var_16 = 1518236123U;
int var_17 = -20812989;
unsigned int var_18 = 1439216849U;
int var_19 = 916406954;
unsigned char var_20 = (unsigned char)110;
unsigned long long int var_21 = 8089361974362586280ULL;
_Bool var_22 = (_Bool)0;
short arr_3 [15] [15] [15] ;
signed char arr_4 [15] ;
_Bool arr_6 [15] [15] [15] ;
unsigned long long int arr_7 [11] ;
unsigned int arr_27 [15] ;
_Bool arr_16 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-13579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)36 : (signed char)-19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 8540194979940687681ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = 4125561395U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
