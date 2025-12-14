#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55699;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)20;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-84;
short var_7 = (short)-26193;
unsigned long long int var_8 = 5152774518713249617ULL;
long long int var_11 = 715298624132343846LL;
unsigned short var_13 = (unsigned short)23190;
long long int var_14 = 4855663234946329526LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)110;
short var_17 = (short)7042;
unsigned char var_18 = (unsigned char)88;
unsigned char var_19 = (unsigned char)34;
unsigned short var_20 = (unsigned short)34865;
int var_21 = -179250039;
short var_22 = (short)-27268;
unsigned long long int var_23 = 11124895152326135986ULL;
int var_24 = 140154744;
unsigned long long int var_25 = 4204508642045439818ULL;
short var_26 = (short)18023;
unsigned int arr_1 [20] ;
short arr_2 [20] ;
unsigned long long int arr_9 [20] [20] [20] [20] ;
signed char arr_10 [20] [20] [20] ;
unsigned long long int arr_12 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 71738911U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-17606;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 15559492777494950591ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8165222380326094181ULL;
}

void checksum() {
    hash(&seed, var_15);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
