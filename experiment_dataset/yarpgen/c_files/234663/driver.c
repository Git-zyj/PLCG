#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7684;
unsigned short var_1 = (unsigned short)50103;
unsigned char var_2 = (unsigned char)255;
unsigned long long int var_3 = 16315598366618181548ULL;
unsigned char var_6 = (unsigned char)252;
unsigned short var_9 = (unsigned short)14598;
short var_10 = (short)-12421;
short var_14 = (short)-25131;
int zero = 0;
unsigned short var_16 = (unsigned short)49054;
unsigned short var_17 = (unsigned short)15699;
unsigned char var_18 = (unsigned char)46;
short var_19 = (short)11214;
unsigned int var_20 = 1163737485U;
int var_21 = 1769711959;
int var_22 = 1122157580;
long long int var_23 = 3129130268347211506LL;
unsigned long long int var_24 = 17741477101751085820ULL;
int var_25 = -1795964410;
unsigned char var_26 = (unsigned char)109;
unsigned short arr_0 [20] [20] ;
int arr_1 [20] [20] ;
_Bool arr_2 [20] [20] ;
_Bool arr_7 [20] [20] [20] ;
unsigned int arr_5 [20] [20] ;
signed char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)504;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1216346253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1166521408U : 2239215641U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-26 : (signed char)121;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
