#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17229515686470982993ULL;
signed char var_7 = (signed char)95;
int var_9 = 1547674666;
unsigned short var_13 = (unsigned short)37505;
signed char var_14 = (signed char)122;
int var_15 = 1183203480;
int var_16 = -36326946;
unsigned long long int var_17 = 17083210818778796803ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)49088;
unsigned int var_21 = 1398090995U;
unsigned long long int var_22 = 4369364402791267820ULL;
unsigned long long int var_23 = 14060188761897101240ULL;
unsigned short var_24 = (unsigned short)11999;
unsigned long long int var_25 = 14147168876905115133ULL;
unsigned char var_26 = (unsigned char)151;
unsigned long long int var_27 = 5612964610462645109ULL;
unsigned long long int arr_0 [20] [20] ;
int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] ;
int arr_9 [20] [20] ;
unsigned short arr_14 [22] ;
short arr_15 [22] ;
unsigned int arr_3 [20] [20] ;
signed char arr_4 [20] ;
unsigned short arr_7 [20] [20] ;
int arr_11 [20] [20] ;
unsigned int arr_16 [22] [22] ;
unsigned long long int arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 16593140035732776433ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1722436648;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 10333305129248140838ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -8677808264202865184LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2158642685U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 833866915;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5704 : (unsigned short)8233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)4080;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 284023052U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)3557;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = -983413299;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 239672206U : 3943739027U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 3194038447526821720ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
