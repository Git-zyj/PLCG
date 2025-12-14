#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2749981754U;
unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)172;
unsigned int var_3 = 1094734151U;
unsigned int var_4 = 2441323053U;
unsigned int var_8 = 259934978U;
unsigned char var_9 = (unsigned char)252;
unsigned char var_10 = (unsigned char)55;
int zero = 0;
unsigned int var_11 = 2725737867U;
unsigned int var_12 = 1630175168U;
unsigned char var_13 = (unsigned char)244;
unsigned int var_14 = 2592622483U;
unsigned int var_15 = 3229712584U;
unsigned int var_16 = 1839597408U;
unsigned int var_17 = 3741403440U;
unsigned int var_18 = 1782705051U;
unsigned char var_19 = (unsigned char)50;
unsigned int var_20 = 3936177219U;
unsigned int arr_1 [22] ;
unsigned int arr_3 [24] [24] ;
unsigned int arr_4 [24] [24] ;
unsigned int arr_5 [24] ;
unsigned int arr_6 [24] [24] ;
unsigned char arr_2 [22] [22] ;
unsigned int arr_7 [24] ;
unsigned char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2080344009U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 938256894U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 3293023606U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2879986218U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 4148067954U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3213984136U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)108;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
