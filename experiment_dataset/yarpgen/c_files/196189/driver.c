#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
int var_3 = 1244812273;
unsigned int var_5 = 1038954183U;
long long int var_8 = -4834995686924612459LL;
short var_10 = (short)-5555;
long long int var_12 = -2709260656072924238LL;
signed char var_13 = (signed char)23;
int zero = 0;
long long int var_17 = -1802426701646463540LL;
int var_18 = 571231100;
long long int var_19 = -3327411944518606994LL;
long long int var_20 = 2990041125193308576LL;
short var_21 = (short)-5666;
unsigned char var_22 = (unsigned char)89;
unsigned char var_23 = (unsigned char)114;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-3903;
unsigned int var_26 = 1186844237U;
long long int arr_1 [23] ;
_Bool arr_5 [23] [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
long long int arr_9 [23] [23] ;
long long int arr_11 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -4164557377367941263LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -8747231010985430679LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 8609262994751692784LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
