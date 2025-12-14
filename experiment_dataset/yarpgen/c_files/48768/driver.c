#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned short var_5 = (unsigned short)48005;
unsigned short var_7 = (unsigned short)55233;
unsigned char var_9 = (unsigned char)172;
signed char var_13 = (signed char)-64;
long long int var_14 = 1376648651226163951LL;
int zero = 0;
unsigned char var_15 = (unsigned char)184;
unsigned long long int var_16 = 4426642052117988325ULL;
unsigned short var_17 = (unsigned short)35490;
unsigned char var_18 = (unsigned char)178;
int var_19 = 1478747033;
unsigned int var_20 = 1079632564U;
_Bool var_21 = (_Bool)0;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned int arr_3 [23] ;
long long int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)36 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4070582918U : 1046158984U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7379960982946451165LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
