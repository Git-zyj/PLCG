#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1688079139U;
int var_1 = 2019155455;
unsigned long long int var_3 = 1192734586030459362ULL;
signed char var_4 = (signed char)41;
int var_5 = -860997908;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 471546708U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)17;
unsigned int var_10 = 3095995611U;
int var_11 = 1018262104;
int var_12 = -212153227;
long long int var_13 = -6578470085203441461LL;
short var_14 = (short)-9156;
unsigned int var_15 = 399254511U;
int var_16 = 371595973;
int var_17 = 1616220882;
int zero = 0;
short var_18 = (short)24502;
short var_19 = (short)-28380;
unsigned long long int var_20 = 2251654232004023040ULL;
unsigned char var_21 = (unsigned char)134;
unsigned int arr_16 [23] [23] [23] [23] ;
unsigned int arr_17 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3378843908U : 2988905694U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 942535336U : 3169299131U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
