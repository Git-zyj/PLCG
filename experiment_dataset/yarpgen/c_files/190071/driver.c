#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)32;
short var_7 = (short)9838;
int var_8 = -1446139103;
unsigned long long int var_9 = 12178787530397570010ULL;
int zero = 0;
unsigned long long int var_11 = 5263663474499763075ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-16315;
unsigned int var_14 = 3852690411U;
unsigned int var_15 = 261230136U;
unsigned long long int var_16 = 542667779217290876ULL;
unsigned int var_17 = 2677900160U;
unsigned char var_18 = (unsigned char)14;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)56555;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)48979;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)6135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)31237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)39502;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
