#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25982;
unsigned char var_2 = (unsigned char)129;
int var_4 = -327677945;
unsigned int var_6 = 491483864U;
unsigned short var_7 = (unsigned short)65506;
int var_8 = 305897305;
int var_10 = -458274930;
unsigned int var_11 = 3917308525U;
unsigned int var_12 = 2523916263U;
int zero = 0;
short var_14 = (short)-11106;
unsigned int var_15 = 1635691203U;
unsigned short var_16 = (unsigned short)8337;
unsigned char var_17 = (unsigned char)194;
int var_18 = 910377089;
signed char arr_0 [11] ;
unsigned int arr_1 [11] ;
short arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2588726731U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25472;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
