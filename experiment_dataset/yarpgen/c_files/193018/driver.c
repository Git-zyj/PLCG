#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8697543337554308554LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)3;
long long int var_6 = 1101871371057688817LL;
unsigned long long int var_7 = 9675961327391347210ULL;
int var_8 = -895348063;
unsigned char var_10 = (unsigned char)231;
unsigned short var_11 = (unsigned short)19824;
unsigned long long int var_12 = 4706166078120337594ULL;
unsigned char var_13 = (unsigned char)6;
unsigned long long int var_14 = 47917217893706529ULL;
signed char var_15 = (signed char)97;
signed char var_16 = (signed char)-84;
unsigned char var_17 = (unsigned char)246;
unsigned int var_18 = 79848527U;
int zero = 0;
int var_20 = 2095842836;
unsigned char var_21 = (unsigned char)223;
signed char var_22 = (signed char)69;
unsigned long long int var_23 = 12254635156927015177ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)23;
signed char var_26 = (signed char)51;
unsigned long long int var_27 = 7731564220670184864ULL;
unsigned long long int var_28 = 122570077911083719ULL;
unsigned long long int var_29 = 4539822544206689107ULL;
long long int var_30 = -6811686854536617578LL;
unsigned char var_31 = (unsigned char)218;
unsigned long long int arr_0 [23] ;
signed char arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_4 [23] [23] ;
int arr_9 [23] ;
short arr_10 [23] [23] [23] ;
short arr_12 [23] [23] ;
signed char arr_19 [22] [22] ;
unsigned short arr_20 [22] [22] ;
unsigned char arr_26 [22] [22] ;
signed char arr_5 [23] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_13 [23] [23] [23] ;
short arr_14 [23] [23] [23] [23] ;
unsigned int arr_18 [10] ;
long long int arr_21 [22] [22] ;
unsigned long long int arr_24 [22] ;
signed char arr_27 [22] [22] ;
unsigned long long int arr_30 [22] [22] ;
signed char arr_31 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2742573862492373743ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 16524135563214086018ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -508803182;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-2730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)30408 : (short)-22284;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)36118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1960884858272691012ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12018441973790861122ULL : 9086709046003386705ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-28413 : (short)-28405;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 710987426U : 4100650442U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = -9078854797746309349LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 15316413910048048063ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = 2175225080048846955ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (signed char)61;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
