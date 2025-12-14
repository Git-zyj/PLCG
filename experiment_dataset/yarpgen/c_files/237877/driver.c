#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
_Bool var_1 = (_Bool)0;
long long int var_2 = 8064925636570358622LL;
signed char var_3 = (signed char)-46;
unsigned char var_4 = (unsigned char)210;
_Bool var_5 = (_Bool)1;
int var_6 = -853436379;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-92;
unsigned short var_10 = (unsigned short)46539;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)59668;
short var_14 = (short)-31347;
unsigned char var_15 = (unsigned char)104;
signed char var_16 = (signed char)-48;
int var_17 = 1636158390;
unsigned short var_18 = (unsigned short)58573;
int var_19 = -576555132;
unsigned int var_20 = 1942441802U;
int var_21 = 1359986145;
unsigned short var_22 = (unsigned short)53837;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
unsigned int arr_13 [15] [15] ;
short arr_14 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 3568254711U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 4109424301U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-17923;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
