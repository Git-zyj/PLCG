#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4798863298837300949LL;
unsigned long long int var_9 = 13833565514091876273ULL;
unsigned int var_10 = 3937021198U;
int zero = 0;
unsigned long long int var_17 = 14838517607176129813ULL;
long long int var_18 = 8253800294954725085LL;
unsigned int var_19 = 692342225U;
unsigned char var_20 = (unsigned char)210;
unsigned int var_21 = 3728829015U;
long long int var_22 = -5935095197967507008LL;
unsigned char var_23 = (unsigned char)99;
unsigned char var_24 = (unsigned char)238;
unsigned char var_25 = (unsigned char)11;
unsigned int var_26 = 2881972320U;
unsigned char arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned long long int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
long long int arr_4 [12] [12] ;
unsigned int arr_6 [12] [12] ;
unsigned long long int arr_7 [12] [12] ;
unsigned int arr_8 [12] [12] ;
unsigned char arr_9 [12] [12] [12] ;
unsigned long long int arr_10 [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] [12] ;
unsigned long long int arr_13 [14] ;
unsigned char arr_14 [14] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4059818117U : 1440951977U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5251132208360317389ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1042016497636196679LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1276331246U : 2114011615U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 16684212849617410308ULL : 5149887272304509720ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 848414005U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)172 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8750078960887276309ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 447524002487281743ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 13763541909236596069ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
