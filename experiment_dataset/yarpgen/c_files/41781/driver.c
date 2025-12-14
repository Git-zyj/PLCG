#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3447228894675787139LL;
unsigned char var_1 = (unsigned char)41;
unsigned int var_2 = 2807987610U;
unsigned char var_3 = (unsigned char)100;
int var_4 = 143484078;
long long int var_5 = 8855308097718730031LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)6311;
long long int var_8 = -5900144295525337936LL;
int zero = 0;
long long int var_10 = -7500912315272188995LL;
short var_11 = (short)28637;
short var_12 = (short)24774;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4653868686321334040ULL;
unsigned char var_15 = (unsigned char)74;
unsigned long long int var_16 = 15641432601967829051ULL;
short var_17 = (short)9981;
unsigned short var_18 = (unsigned short)12497;
unsigned char var_19 = (unsigned char)233;
unsigned char var_20 = (unsigned char)218;
unsigned int var_21 = 1200148494U;
short arr_0 [16] ;
_Bool arr_2 [16] ;
short arr_3 [16] [16] ;
short arr_5 [21] ;
unsigned char arr_9 [21] [21] ;
unsigned char arr_13 [21] ;
long long int arr_16 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)2040;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30854;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)9506;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 4496471064765210892LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
