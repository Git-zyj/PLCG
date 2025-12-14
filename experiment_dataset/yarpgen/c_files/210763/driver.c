#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32589;
unsigned long long int var_1 = 1120371926039586086ULL;
unsigned long long int var_2 = 11361504763879680986ULL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-16602;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)32;
unsigned short var_15 = (unsigned short)42071;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
unsigned int var_21 = 1152555639U;
unsigned short var_22 = (unsigned short)61144;
unsigned char var_23 = (unsigned char)5;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 9932120188740951790ULL;
unsigned short var_26 = (unsigned short)52710;
_Bool var_27 = (_Bool)1;
_Bool arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
signed char arr_2 [14] [14] ;
unsigned short arr_8 [14] [14] [14] [14] ;
unsigned int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)48159;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)51571 : (unsigned short)51345;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2930255473U : 4093605294U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
