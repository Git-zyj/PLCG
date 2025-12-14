#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)12680;
unsigned char var_4 = (unsigned char)194;
short var_5 = (short)-18197;
signed char var_6 = (signed char)127;
unsigned short var_7 = (unsigned short)56614;
_Bool var_9 = (_Bool)0;
short var_12 = (short)31900;
unsigned short var_13 = (unsigned short)62829;
unsigned short var_14 = (unsigned short)2609;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-23;
unsigned short var_18 = (unsigned short)45629;
short var_19 = (short)2132;
short var_20 = (short)4980;
unsigned short var_21 = (unsigned short)41369;
signed char arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3012656639U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)189;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
