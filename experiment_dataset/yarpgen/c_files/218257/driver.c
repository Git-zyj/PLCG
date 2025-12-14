#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1391708603;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-96;
_Bool var_6 = (_Bool)0;
int var_7 = -1393963540;
signed char var_9 = (signed char)-34;
short var_11 = (short)-17086;
long long int var_16 = -485641649186403563LL;
int zero = 0;
int var_20 = -1563956941;
_Bool var_21 = (_Bool)0;
long long int var_22 = -717073566205378895LL;
unsigned char var_23 = (unsigned char)67;
int var_24 = 727907057;
unsigned short var_25 = (unsigned short)38311;
int var_26 = 508805838;
unsigned short var_27 = (unsigned short)41385;
unsigned char var_28 = (unsigned char)41;
unsigned short var_29 = (unsigned short)16501;
short var_30 = (short)31779;
int var_31 = -1901467784;
unsigned char var_32 = (unsigned char)237;
unsigned short var_33 = (unsigned short)24619;
int var_34 = -1554550699;
_Bool var_35 = (_Bool)1;
unsigned long long int arr_0 [20] [20] ;
int arr_1 [20] ;
short arr_2 [20] ;
signed char arr_3 [20] ;
short arr_6 [18] [18] ;
unsigned char arr_8 [18] ;
long long int arr_9 [18] [18] ;
_Bool arr_12 [15] [15] ;
unsigned int arr_14 [15] ;
unsigned char arr_4 [20] ;
signed char arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 11991272976742955470ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 557228460;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)10708;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (short)13441;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = -2678808222995107979LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 3646612397U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (signed char)78;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
