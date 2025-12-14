#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10006;
int var_1 = -1562664648;
long long int var_2 = -8340366302694074988LL;
unsigned char var_3 = (unsigned char)199;
unsigned char var_4 = (unsigned char)6;
int var_8 = -1455600273;
signed char var_9 = (signed char)18;
long long int var_12 = 1901937707254672397LL;
signed char var_13 = (signed char)-26;
unsigned int var_15 = 3079769866U;
long long int var_17 = 8745392644963181426LL;
int zero = 0;
signed char var_19 = (signed char)-108;
unsigned int var_20 = 2806042179U;
signed char var_21 = (signed char)99;
signed char var_22 = (signed char)-78;
unsigned short var_23 = (unsigned short)58006;
signed char var_24 = (signed char)110;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
_Bool arr_2 [16] [16] ;
short arr_3 [16] ;
unsigned char arr_4 [16] [16] [16] ;
short arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)5237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)32230;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
