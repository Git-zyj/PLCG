#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26537;
unsigned long long int var_2 = 16651636792556124148ULL;
unsigned int var_4 = 4004890660U;
long long int var_5 = -6765681704147118225LL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-35;
unsigned short var_9 = (unsigned short)12528;
unsigned short var_11 = (unsigned short)22065;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
short var_14 = (short)-18611;
short var_15 = (short)11229;
unsigned long long int var_16 = 16941231961788095471ULL;
long long int var_17 = -2066816512754844776LL;
short var_18 = (short)9548;
unsigned long long int var_19 = 17069615314522582233ULL;
short var_20 = (short)-23412;
long long int arr_0 [20] ;
unsigned int arr_3 [20] ;
signed char arr_6 [20] ;
int arr_9 [20] [20] ;
_Bool arr_13 [20] [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
short arr_18 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2134000994776698665LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3377126229U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1686480429;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 6893025618398839574ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 14080676122167947238ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)17363 : (short)-11576;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
