#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19751;
unsigned short var_3 = (unsigned short)31493;
unsigned char var_7 = (unsigned char)162;
int var_8 = 215768295;
unsigned char var_9 = (unsigned char)253;
unsigned char var_10 = (unsigned char)29;
signed char var_11 = (signed char)64;
unsigned long long int var_12 = 12709032371623961923ULL;
unsigned char var_13 = (unsigned char)162;
unsigned short var_14 = (unsigned short)27430;
signed char var_17 = (signed char)-44;
int zero = 0;
unsigned short var_18 = (unsigned short)25504;
_Bool var_19 = (_Bool)0;
short var_20 = (short)22619;
unsigned short var_21 = (unsigned short)1845;
signed char var_22 = (signed char)-46;
long long int var_23 = -5851312402673020161LL;
unsigned char var_24 = (unsigned char)202;
int var_25 = 1629989017;
_Bool arr_0 [22] [22] ;
unsigned int arr_7 [13] [13] ;
short arr_3 [22] [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 3519280967U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)1698;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-22393;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
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
