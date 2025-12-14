#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 955735014;
unsigned short var_2 = (unsigned short)56899;
unsigned char var_7 = (unsigned char)121;
int var_8 = -1031362052;
int zero = 0;
unsigned long long int var_11 = 15645160365896050574ULL;
unsigned short var_12 = (unsigned short)17967;
unsigned int var_13 = 3108093759U;
unsigned short var_14 = (unsigned short)36366;
long long int var_15 = -5085860558635917944LL;
short var_16 = (short)8540;
unsigned short var_17 = (unsigned short)17105;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)10839;
unsigned char var_20 = (unsigned char)90;
long long int var_21 = 3616250931904768872LL;
unsigned char var_22 = (unsigned char)129;
short var_23 = (short)-2338;
unsigned long long int var_24 = 1981050964831397317ULL;
short arr_0 [11] ;
long long int arr_1 [11] [11] ;
short arr_3 [11] [11] ;
_Bool arr_4 [11] ;
unsigned short arr_7 [11] ;
unsigned int arr_9 [11] [11] [11] ;
unsigned long long int arr_17 [11] ;
unsigned short arr_5 [11] ;
unsigned char arr_14 [11] ;
unsigned int arr_18 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-8879;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -5807180970953000363LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15184;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)31085;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3759079311U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 5398392318480753652ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)54034;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 486825744U : 2371651090U;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
