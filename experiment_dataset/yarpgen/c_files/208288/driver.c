#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)186;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1778891789U;
unsigned short var_7 = (unsigned short)30608;
unsigned short var_9 = (unsigned short)50385;
unsigned long long int var_10 = 17781676896342302944ULL;
unsigned short var_11 = (unsigned short)41503;
unsigned long long int var_12 = 3653303205817444389ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
long long int var_15 = -3640254008894299249LL;
int var_16 = 866462049;
unsigned long long int var_17 = 3664242229210406260ULL;
unsigned char arr_1 [21] [21] ;
int arr_4 [21] ;
int arr_6 [21] ;
unsigned char arr_7 [21] [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 792387938;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1506447463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)206 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2866356864U : 3521517825U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -6480102141913854958LL : -8016609845497262123LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
