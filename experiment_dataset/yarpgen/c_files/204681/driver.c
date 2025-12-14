#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
long long int var_2 = -8097460670386077309LL;
unsigned long long int var_7 = 8377310588398144004ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7274034518299779605LL;
int var_12 = -1316228252;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
unsigned char var_14 = (unsigned char)229;
unsigned char var_15 = (unsigned char)157;
unsigned char var_16 = (unsigned char)221;
long long int var_17 = 8227970402925708434LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)24842;
unsigned long long int var_20 = 9923031934731054614ULL;
int var_21 = -1087987317;
short arr_0 [10] ;
int arr_1 [10] ;
unsigned long long int arr_4 [10] ;
unsigned char arr_5 [10] ;
unsigned char arr_6 [10] [10] ;
long long int arr_8 [10] ;
long long int arr_9 [10] ;
unsigned long long int arr_14 [22] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_3 [10] ;
long long int arr_7 [10] [10] ;
unsigned int arr_10 [10] [10] ;
_Bool arr_11 [10] ;
int arr_12 [10] ;
unsigned int arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)6282;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1273769255;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7582029137653443631ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -3241152701032595852LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -1450764418524718812LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 16648373608405640512ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)41243;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 16886439766466147710ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -1566514301493948875LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 1532930334U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = -1962983141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 4100941148U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
