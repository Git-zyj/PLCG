#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 45253630U;
unsigned char var_3 = (unsigned char)205;
unsigned short var_4 = (unsigned short)8189;
unsigned int var_5 = 3529402577U;
unsigned char var_8 = (unsigned char)47;
unsigned char var_9 = (unsigned char)8;
unsigned char var_10 = (unsigned char)66;
_Bool var_11 = (_Bool)1;
int var_12 = -1581197785;
int zero = 0;
short var_14 = (short)-18605;
unsigned char var_15 = (unsigned char)219;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)109;
unsigned int var_18 = 4256113174U;
signed char var_19 = (signed char)-119;
int var_20 = -357371235;
unsigned short var_21 = (unsigned short)45849;
int arr_0 [24] [24] ;
long long int arr_2 [17] [17] ;
unsigned short arr_7 [17] [17] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -1869512722;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 7075929614067051462LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)12820;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)127;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
