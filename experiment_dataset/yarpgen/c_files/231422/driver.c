#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -185693421;
unsigned char var_6 = (unsigned char)254;
int var_9 = 854509691;
unsigned char var_11 = (unsigned char)222;
unsigned int var_12 = 3479021709U;
unsigned char var_13 = (unsigned char)7;
unsigned short var_15 = (unsigned short)18591;
int zero = 0;
unsigned short var_16 = (unsigned short)8848;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-97;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)84;
int var_21 = -657551439;
unsigned short var_22 = (unsigned short)63584;
unsigned char var_23 = (unsigned char)77;
unsigned char var_24 = (unsigned char)161;
unsigned short var_25 = (unsigned short)25975;
_Bool var_26 = (_Bool)1;
unsigned char arr_1 [17] ;
short arr_2 [22] [22] ;
_Bool arr_6 [20] [20] ;
long long int arr_8 [20] [20] [20] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-16988;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -5632544151147224828LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4168480987U : 3116284573U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
