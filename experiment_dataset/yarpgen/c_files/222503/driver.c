#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 123175975U;
signed char var_7 = (signed char)69;
unsigned int var_8 = 3222050943U;
int var_18 = -22300006;
unsigned short var_19 = (unsigned short)48173;
int zero = 0;
short var_20 = (short)12546;
long long int var_21 = 6315134132596819543LL;
unsigned short var_22 = (unsigned short)13035;
unsigned long long int var_23 = 16482805077455629051ULL;
int var_24 = -1522882763;
unsigned int var_25 = 1133034539U;
long long int var_26 = 8036816822665539168LL;
int var_27 = 1036395742;
short var_28 = (short)-26878;
unsigned int var_29 = 3233026533U;
int arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned char arr_2 [20] [20] ;
int arr_6 [20] [20] ;
int arr_11 [20] [20] [20] [20] [20] ;
short arr_13 [20] [20] [20] [20] ;
unsigned int arr_18 [10] [10] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -890014719;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 1438608;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -866290600;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)12211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 1250673085U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)180;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
