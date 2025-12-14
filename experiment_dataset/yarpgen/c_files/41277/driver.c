#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14251;
signed char var_2 = (signed char)91;
int var_3 = 498516389;
unsigned long long int var_4 = 13265939572415123317ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)23563;
long long int var_12 = 146824826530510751LL;
int zero = 0;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)-83;
unsigned short var_20 = (unsigned short)1732;
unsigned short var_21 = (unsigned short)63857;
unsigned char var_22 = (unsigned char)155;
short var_23 = (short)22025;
unsigned int var_24 = 920520123U;
long long int arr_2 [16] ;
unsigned int arr_3 [16] [16] ;
signed char arr_5 [16] [16] [16] ;
signed char arr_6 [16] [16] ;
unsigned char arr_8 [19] ;
_Bool arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -8062665034625478163LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2248805599U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
