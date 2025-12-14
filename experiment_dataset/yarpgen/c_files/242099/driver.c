#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned short var_2 = (unsigned short)63208;
unsigned short var_3 = (unsigned short)59159;
int var_4 = 1624881998;
unsigned char var_7 = (unsigned char)73;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)50;
int var_13 = 1496239210;
unsigned short var_14 = (unsigned short)40906;
int zero = 0;
unsigned char var_15 = (unsigned char)116;
int var_16 = 1433290507;
unsigned short var_17 = (unsigned short)37049;
unsigned int var_18 = 3833978750U;
unsigned long long int var_19 = 12788090210680820159ULL;
unsigned int var_20 = 2799953517U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1761382870U;
unsigned int var_23 = 1369388574U;
_Bool arr_2 [16] ;
_Bool arr_6 [16] [16] [16] ;
int arr_11 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_7 [16] ;
int arr_13 [16] [16] ;
unsigned short arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1054850217 : 722531622;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4895024614001204051ULL : 10854390578727040766ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 834663707 : -1591620176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)1890;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
