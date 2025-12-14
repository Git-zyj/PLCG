#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)104;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)58974;
unsigned char var_11 = (unsigned char)188;
unsigned short var_12 = (unsigned short)24024;
signed char var_15 = (signed char)25;
signed char var_16 = (signed char)-15;
unsigned int var_17 = 866442407U;
int zero = 0;
unsigned char var_20 = (unsigned char)213;
unsigned long long int var_21 = 5424290462035680918ULL;
unsigned char var_22 = (unsigned char)213;
unsigned char var_23 = (unsigned char)237;
_Bool var_24 = (_Bool)0;
signed char arr_12 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)52 : (signed char)-22;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
