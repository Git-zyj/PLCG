#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1262541916U;
unsigned short var_1 = (unsigned short)14577;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)14364;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 18157173355043799006ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 17384817320239900706ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8761;
signed char var_14 = (signed char)-45;
unsigned short var_15 = (unsigned short)32705;
int zero = 0;
int var_16 = -90515080;
int var_17 = 835869711;
int var_18 = 1143115612;
signed char var_19 = (signed char)11;
short arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned short arr_2 [22] [22] ;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-14251;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4040547615U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)65516;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2935162635U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
