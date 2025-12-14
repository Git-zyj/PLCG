#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7780995108282573338LL;
unsigned long long int var_2 = 12876166384899794841ULL;
unsigned int var_3 = 4199842006U;
short var_4 = (short)23902;
signed char var_5 = (signed char)31;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)195;
short var_8 = (short)9954;
unsigned int var_9 = 52230417U;
unsigned int var_10 = 1478099134U;
unsigned int var_12 = 3210970809U;
long long int var_13 = -708541481441096390LL;
unsigned char var_14 = (unsigned char)219;
long long int var_15 = -5320988792773275046LL;
long long int var_16 = -3034875348816183695LL;
int zero = 0;
int var_17 = -421175243;
unsigned int var_18 = 1836937433U;
unsigned short var_19 = (unsigned short)52513;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14443160257654156475ULL;
int var_22 = -460475209;
short arr_1 [18] ;
unsigned int arr_4 [18] [18] [18] [18] ;
_Bool arr_6 [18] [18] [18] ;
unsigned int arr_7 [18] [18] [18] [18] [18] ;
long long int arr_8 [18] [18] [18] [18] ;
signed char arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-30081;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3085534823U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 689944778U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -4991321082850110862LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)16;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
