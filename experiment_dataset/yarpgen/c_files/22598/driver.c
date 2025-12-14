#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1076107539U;
signed char var_1 = (signed char)0;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-16090;
_Bool var_6 = (_Bool)0;
int var_9 = 31886380;
short var_10 = (short)21795;
unsigned int var_11 = 2961452810U;
unsigned int var_12 = 1803852506U;
int zero = 0;
unsigned int var_14 = 4189225969U;
long long int var_15 = -8291246962320728030LL;
unsigned long long int var_16 = 10489660601386525774ULL;
short var_17 = (short)-29188;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3668639843U;
unsigned short arr_0 [11] ;
unsigned int arr_2 [11] ;
unsigned short arr_11 [11] [11] [11] [11] [11] [11] [11] ;
short arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)37706;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 655579564U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)56433;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2654 : (short)-16474;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
