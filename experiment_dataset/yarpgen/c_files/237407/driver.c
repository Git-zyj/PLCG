#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5212923721552913504ULL;
signed char var_1 = (signed char)42;
int var_2 = -1732308822;
long long int var_3 = -6286653961660837098LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)10540;
int var_6 = -257195017;
long long int var_7 = 5777615148910074989LL;
short var_9 = (short)22629;
unsigned long long int var_10 = 12746643382799933907ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -6561251461563173276LL;
unsigned int var_13 = 4210550270U;
unsigned int var_14 = 4210983358U;
unsigned char var_15 = (unsigned char)0;
unsigned short var_16 = (unsigned short)14667;
long long int var_17 = -3678397783746973820LL;
unsigned long long int var_18 = 16053248677299778133ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)7547;
int var_21 = 788835870;
int var_22 = -1620860442;
_Bool var_23 = (_Bool)0;
unsigned short arr_0 [11] ;
short arr_2 [11] ;
unsigned short arr_3 [13] ;
unsigned short arr_4 [13] ;
unsigned char arr_5 [10] ;
int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)8545;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)22593;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)53427;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)37893;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1468780044;
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
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
