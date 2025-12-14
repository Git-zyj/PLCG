#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)4771;
unsigned long long int var_4 = 6681465548767695623ULL;
int var_5 = -1399932178;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2609448610235583011LL;
int var_8 = 530004959;
short var_9 = (short)-21529;
unsigned short var_10 = (unsigned short)64701;
unsigned char var_11 = (unsigned char)189;
unsigned long long int var_12 = 15348368433377350320ULL;
unsigned char var_13 = (unsigned char)133;
unsigned int var_14 = 262044068U;
short var_15 = (short)11311;
int zero = 0;
short var_16 = (short)-31799;
unsigned char var_17 = (unsigned char)27;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-20287;
short var_20 = (short)15195;
unsigned char var_21 = (unsigned char)28;
unsigned int var_22 = 1003188478U;
unsigned char var_23 = (unsigned char)232;
long long int var_24 = 3057515740842468487LL;
long long int var_25 = 8338124344993303262LL;
long long int var_26 = 201608359786652928LL;
unsigned short arr_0 [13] ;
_Bool arr_2 [13] [13] [13] ;
long long int arr_3 [13] [13] ;
unsigned short arr_4 [13] ;
_Bool arr_6 [13] [13] [13] [13] ;
unsigned short arr_12 [19] ;
short arr_14 [19] [19] ;
_Bool arr_15 [19] [19] ;
unsigned long long int arr_16 [19] ;
unsigned long long int arr_17 [19] [19] [19] [19] ;
unsigned long long int arr_18 [19] ;
signed char arr_10 [13] ;
unsigned long long int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)47423;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 8152423314680444858LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)3335;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned short)9028;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (short)31887;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1901033732892964697ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3780559351957765049ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 13195353694284407237ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 6556187266988606720ULL;
}

void checksum() {
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
