#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned char var_1 = (unsigned char)214;
_Bool var_2 = (_Bool)0;
int var_3 = 2112648089;
unsigned char var_4 = (unsigned char)92;
int var_5 = 1986109724;
int var_6 = 416365827;
signed char var_7 = (signed char)-78;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1375246508U;
int zero = 0;
signed char var_10 = (signed char)-75;
unsigned int var_11 = 1334777030U;
unsigned int var_12 = 3081498371U;
int var_13 = 323868412;
signed char var_14 = (signed char)-30;
signed char var_15 = (signed char)-78;
unsigned short var_16 = (unsigned short)19911;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4866307421289464323LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)201;
unsigned long long int var_22 = 15648579215398775755ULL;
long long int arr_4 [11] ;
unsigned char arr_11 [11] [11] ;
unsigned int arr_21 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -1760826996569400242LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1516862639U;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
