#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)13;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-29874;
long long int var_7 = 743939670876064751LL;
short var_8 = (short)1887;
int var_9 = -274411332;
short var_10 = (short)18748;
unsigned char var_12 = (unsigned char)187;
unsigned char var_13 = (unsigned char)163;
signed char var_16 = (signed char)106;
int var_17 = 448696265;
int zero = 0;
signed char var_18 = (signed char)56;
short var_19 = (short)30349;
unsigned int var_20 = 1747974417U;
long long int var_21 = -8163520393897565193LL;
unsigned int var_22 = 1925432755U;
unsigned int var_23 = 1354697206U;
int var_24 = 387484984;
unsigned long long int var_25 = 2639306764023201533ULL;
unsigned int var_26 = 4222135201U;
unsigned int var_27 = 226690362U;
long long int var_28 = 5252111881595489573LL;
_Bool arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned int arr_2 [17] ;
long long int arr_5 [17] [17] ;
int arr_7 [12] [12] ;
short arr_3 [17] ;
unsigned char arr_4 [17] [17] ;
unsigned long long int arr_11 [16] ;
_Bool arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1003605182U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -5827910825939768851LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 1679354581;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)29168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 17461400076660090911ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
