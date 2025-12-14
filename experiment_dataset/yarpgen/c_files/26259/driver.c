#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2086227437;
unsigned char var_1 = (unsigned char)6;
signed char var_2 = (signed char)-13;
unsigned int var_3 = 2310474342U;
int var_4 = 1071298196;
unsigned int var_5 = 2281537377U;
short var_6 = (short)31916;
signed char var_8 = (signed char)-82;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)60274;
int zero = 0;
int var_15 = 338156621;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4004437050U;
long long int var_18 = 465970286157535470LL;
signed char var_19 = (signed char)36;
int var_20 = 480751180;
unsigned short var_21 = (unsigned short)41359;
unsigned char arr_1 [24] [24] ;
unsigned int arr_4 [24] ;
unsigned short arr_8 [24] ;
long long int arr_10 [24] [24] [24] [24] [24] ;
_Bool arr_14 [24] [24] [24] ;
long long int arr_15 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1918830601U : 1711003878U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)15923;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 6494206920190385722LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 962066820238154227LL : 9180044529188143711LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
