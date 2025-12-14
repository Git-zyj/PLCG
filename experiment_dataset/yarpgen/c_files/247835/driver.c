#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 325830575120139224ULL;
unsigned int var_2 = 3173039252U;
int var_3 = -1038548251;
unsigned short var_4 = (unsigned short)44821;
unsigned int var_5 = 2161994873U;
unsigned long long int var_6 = 10381872875302194339ULL;
unsigned long long int var_8 = 490914785539668776ULL;
int var_10 = 1406155898;
unsigned int var_13 = 250363540U;
unsigned short var_15 = (unsigned short)30918;
unsigned short var_16 = (unsigned short)59310;
unsigned long long int var_17 = 17279307086237065179ULL;
int var_18 = -1849865834;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3778959450U;
unsigned int var_21 = 3669157738U;
unsigned int var_22 = 2836530044U;
unsigned int var_23 = 431569838U;
unsigned long long int var_24 = 700601269666879159ULL;
unsigned int var_25 = 2120909944U;
unsigned int var_26 = 2871102984U;
unsigned long long int var_27 = 8775269163165620019ULL;
unsigned short var_28 = (unsigned short)2611;
unsigned char var_29 = (unsigned char)159;
signed char var_30 = (signed char)60;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 2532674459635696829ULL;
long long int var_33 = 5476161922447040001LL;
unsigned long long int arr_7 [14] ;
unsigned int arr_15 [10] [10] ;
unsigned int arr_18 [22] [22] ;
signed char arr_28 [22] [22] [22] [22] ;
unsigned int arr_29 [22] ;
unsigned int arr_32 [22] ;
unsigned short arr_33 [22] ;
signed char arr_37 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 14821671910332573919ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 2054717005U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 860012735U : 3356802981U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)127 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 1980640563U : 2820599945U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 3845794314U : 830857022U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11383 : (unsigned short)13626;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (signed char)89;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
