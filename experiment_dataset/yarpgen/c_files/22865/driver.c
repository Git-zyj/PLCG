#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5854047807231791606ULL;
short var_9 = (short)-12522;
unsigned long long int var_13 = 17056518449747684184ULL;
unsigned long long int var_18 = 15463826852315166881ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)38466;
_Bool var_20 = (_Bool)0;
int var_21 = -862165916;
unsigned int var_22 = 2268945043U;
signed char var_23 = (signed char)-4;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)19257;
int var_26 = 158250284;
signed char arr_0 [11] [11] ;
short arr_1 [11] ;
_Bool arr_2 [11] ;
int arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] ;
short arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)10687;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 397386511;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)17215;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-21578;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
