#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22029;
int var_1 = 1443760162;
unsigned int var_2 = 2822239218U;
long long int var_3 = -3139011271253762084LL;
int var_4 = -1665794564;
unsigned int var_5 = 712574767U;
short var_6 = (short)4365;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)106;
int var_9 = -415043879;
int zero = 0;
long long int var_10 = 6898829284064926479LL;
unsigned char var_11 = (unsigned char)42;
int var_12 = 2097853123;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)74;
unsigned char arr_0 [18] ;
int arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
_Bool arr_3 [18] ;
unsigned char arr_4 [18] [18] ;
short arr_5 [18] ;
unsigned long long int arr_6 [18] [18] [18] [18] ;
unsigned short arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -466975446 : -251140266;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36754 : (unsigned short)4273;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)22712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4471728283166308886ULL : 16538379058293332943ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)10843;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
