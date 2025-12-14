#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 83787004;
unsigned long long int var_2 = 7650750375060262638ULL;
unsigned long long int var_3 = 9857982198238514295ULL;
int var_4 = -1107679047;
signed char var_5 = (signed char)34;
int var_7 = -554154538;
short var_10 = (short)16904;
int zero = 0;
unsigned short var_11 = (unsigned short)7834;
unsigned long long int var_12 = 2480876454747385180ULL;
unsigned long long int var_13 = 9994047473193931491ULL;
unsigned long long int var_14 = 16572903526537491023ULL;
signed char var_15 = (signed char)2;
unsigned char var_16 = (unsigned char)77;
int var_17 = -517101688;
long long int var_18 = -4679141960576036808LL;
signed char var_19 = (signed char)-81;
unsigned char var_20 = (unsigned char)86;
signed char var_21 = (signed char)-106;
unsigned int var_22 = 237722936U;
_Bool var_23 = (_Bool)0;
unsigned short arr_1 [13] ;
signed char arr_2 [13] ;
long long int arr_3 [13] [13] [13] ;
unsigned char arr_5 [13] ;
signed char arr_6 [13] ;
unsigned long long int arr_7 [13] [13] ;
long long int arr_8 [13] [13] [13] [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)48850;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2498358534858344185LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)13 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 6932886474870212386ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 5182648221229541768LL : 8092197500937507894LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2363321145165708799ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)20 : (signed char)-83;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
