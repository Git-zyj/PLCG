#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1876068453;
unsigned short var_1 = (unsigned short)25939;
unsigned long long int var_2 = 5524139539093356652ULL;
signed char var_5 = (signed char)-41;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2367495877U;
unsigned short var_10 = (unsigned short)46926;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)153;
unsigned char var_14 = (unsigned char)212;
unsigned long long int var_16 = 6423501836794054546ULL;
long long int var_18 = 6194643411294417225LL;
int zero = 0;
long long int var_19 = 3096719651440926712LL;
unsigned int var_20 = 2068297656U;
unsigned int var_21 = 1298852166U;
unsigned char var_22 = (unsigned char)14;
long long int var_23 = -2460141058601933107LL;
_Bool var_24 = (_Bool)0;
int var_25 = 1357240514;
int var_26 = 1048712259;
unsigned char var_27 = (unsigned char)19;
unsigned char var_28 = (unsigned char)139;
unsigned long long int var_29 = 6391752765041638267ULL;
signed char var_30 = (signed char)-85;
int var_31 = 690668684;
unsigned char arr_2 [25] [25] ;
unsigned int arr_7 [25] [25] [25] ;
_Bool arr_8 [25] ;
long long int arr_9 [25] [25] [25] [25] [25] [25] ;
_Bool arr_10 [25] ;
short arr_11 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_13 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)177 : (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3118101167U : 2985268385U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8677895002719973954LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)3782;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 12934869762103514574ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
