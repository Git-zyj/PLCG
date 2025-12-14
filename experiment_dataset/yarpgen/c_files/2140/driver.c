#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1167534576U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)34886;
unsigned short var_3 = (unsigned short)29176;
int var_4 = -11466594;
unsigned char var_5 = (unsigned char)127;
unsigned int var_6 = 1211576233U;
unsigned short var_7 = (unsigned short)45173;
_Bool var_8 = (_Bool)0;
long long int var_9 = -4260484663361961574LL;
int var_10 = 1737112281;
int zero = 0;
unsigned short var_11 = (unsigned short)57782;
short var_12 = (short)-2056;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)7430;
unsigned short var_15 = (unsigned short)39420;
short var_16 = (short)-26037;
unsigned char var_17 = (unsigned char)33;
unsigned int var_18 = 3743350078U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)41195;
unsigned short var_21 = (unsigned short)63774;
unsigned long long int arr_0 [12] ;
short arr_2 [12] [12] [12] ;
_Bool arr_6 [16] ;
_Bool arr_7 [16] [16] ;
_Bool arr_8 [16] ;
unsigned short arr_10 [21] ;
unsigned char arr_12 [21] [21] [21] ;
short arr_13 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 14444388225506772004ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)7611;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)62504;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-1877;
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
