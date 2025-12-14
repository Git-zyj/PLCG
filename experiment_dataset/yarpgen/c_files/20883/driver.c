#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45171;
int var_1 = -214933784;
int var_4 = -1088443557;
unsigned short var_6 = (unsigned short)27341;
unsigned long long int var_7 = 12304472370931805650ULL;
unsigned long long int var_10 = 11107247967784893062ULL;
unsigned char var_11 = (unsigned char)1;
unsigned char var_12 = (unsigned char)134;
int zero = 0;
unsigned int var_13 = 3988440382U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10478242339288089888ULL;
unsigned char var_16 = (unsigned char)37;
short var_17 = (short)28258;
unsigned char var_18 = (unsigned char)26;
unsigned long long int var_19 = 3434313639100776790ULL;
unsigned int var_20 = 2969788310U;
unsigned char var_21 = (unsigned char)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)11271;
unsigned char var_24 = (unsigned char)168;
unsigned short arr_0 [17] ;
int arr_2 [17] [17] ;
int arr_7 [13] ;
long long int arr_11 [13] [13] [13] ;
unsigned long long int arr_14 [22] ;
unsigned short arr_15 [22] ;
unsigned long long int arr_16 [22] ;
unsigned int arr_3 [17] ;
unsigned char arr_8 [13] ;
unsigned long long int arr_9 [13] [13] ;
unsigned char arr_12 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)28640;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1751233175;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -970798230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6142932586409041387LL : -2581969184187170297LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 4033606495962668529ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)2734;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 86319637931952694ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 217450073U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 17171841601308933851ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)94;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
