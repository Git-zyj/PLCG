#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
_Bool var_1 = (_Bool)1;
int var_3 = -398161882;
long long int var_6 = -3463842454048242474LL;
unsigned long long int var_8 = 13489849773320425186ULL;
unsigned short var_9 = (unsigned short)9851;
signed char var_10 = (signed char)-16;
short var_11 = (short)2199;
unsigned int var_12 = 4095264428U;
unsigned int var_13 = 869997038U;
int zero = 0;
long long int var_15 = -592360189442150397LL;
unsigned long long int var_16 = 15952452484426012850ULL;
unsigned char var_17 = (unsigned char)125;
short var_18 = (short)-18391;
unsigned int var_19 = 24686071U;
unsigned int var_20 = 2354028209U;
unsigned short var_21 = (unsigned short)12018;
unsigned char arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 9193545484743900535ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)64320;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
