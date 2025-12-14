#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23580;
unsigned short var_1 = (unsigned short)9405;
_Bool var_2 = (_Bool)0;
int var_3 = 197735895;
unsigned int var_10 = 4251047598U;
long long int var_11 = -2764570159756149493LL;
int var_13 = -629218886;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)412;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)58;
unsigned char var_18 = (unsigned char)235;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)19863;
short var_21 = (short)-14247;
unsigned short var_22 = (unsigned short)31302;
_Bool arr_0 [13] [13] ;
unsigned int arr_1 [13] [13] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 4143638974U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)135;
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
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
