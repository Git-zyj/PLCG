#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1968515660;
signed char var_1 = (signed char)13;
unsigned char var_2 = (unsigned char)162;
_Bool var_3 = (_Bool)0;
short var_4 = (short)1863;
signed char var_5 = (signed char)75;
short var_6 = (short)-14029;
unsigned long long int var_7 = 4835183317021645969ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 13372382695551033616ULL;
unsigned int var_10 = 339960928U;
long long int var_11 = -6538646788504494485LL;
unsigned int var_12 = 2205671895U;
unsigned long long int var_13 = 9324168905764591431ULL;
int var_15 = -1541674386;
_Bool var_16 = (_Bool)0;
long long int var_17 = 1327396566486889549LL;
short var_18 = (short)21266;
unsigned int var_19 = 929219015U;
int zero = 0;
unsigned int var_20 = 694174966U;
short var_21 = (short)-8174;
short var_22 = (short)-22396;
unsigned long long int var_23 = 15369473422132495260ULL;
short var_24 = (short)-27150;
short var_25 = (short)-28085;
unsigned char var_26 = (unsigned char)154;
_Bool arr_2 [22] ;
unsigned char arr_6 [22] [22] ;
_Bool arr_7 [22] [22] ;
signed char arr_12 [22] [22] [22] ;
unsigned char arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)194;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
