#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
unsigned char var_2 = (unsigned char)163;
unsigned int var_3 = 3730696488U;
unsigned long long int var_4 = 4668542236484031656ULL;
signed char var_5 = (signed char)-85;
unsigned int var_7 = 1685873462U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3934101426U;
unsigned char var_10 = (unsigned char)112;
unsigned long long int var_11 = 5483728175881366385ULL;
signed char var_12 = (signed char)115;
signed char var_15 = (signed char)33;
int zero = 0;
signed char var_16 = (signed char)75;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)12;
int var_19 = -398102636;
short var_20 = (short)-25723;
long long int var_21 = -675595795749562646LL;
unsigned int var_22 = 3175755221U;
unsigned char var_23 = (unsigned char)34;
long long int arr_0 [16] ;
signed char arr_1 [16] ;
signed char arr_10 [25] [25] [25] ;
unsigned short arr_12 [25] ;
_Bool arr_2 [16] [16] ;
int arr_3 [16] ;
unsigned int arr_8 [25] ;
int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8695846166587539205LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)65430;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -421538853;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 141121561U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 1814850403;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
