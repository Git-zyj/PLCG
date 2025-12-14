#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14058427159178499553ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 1635334150769352043ULL;
short var_4 = (short)-4647;
unsigned short var_5 = (unsigned short)48518;
unsigned int var_6 = 3525968217U;
unsigned short var_8 = (unsigned short)9728;
unsigned int var_9 = 632247927U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)30;
unsigned char var_12 = (unsigned char)88;
int var_13 = 1104924487;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2400496281046506520ULL;
long long int var_16 = 8493274855512049841LL;
unsigned char var_17 = (unsigned char)133;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
int var_19 = 645242322;
int var_20 = 2118848954;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned short arr_3 [17] [17] [17] ;
long long int arr_4 [17] ;
unsigned int arr_5 [17] [17] [17] ;
unsigned int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 875019501U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3975323170U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4689386039594770313ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)25824 : (unsigned short)48492;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8368210248415266865LL : 9026478339525121777LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1415411109U : 1173664973U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1470776026U : 2960893974U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
