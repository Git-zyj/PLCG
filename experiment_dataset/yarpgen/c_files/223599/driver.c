#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 536502724U;
long long int var_2 = 3582591409733750052LL;
unsigned int var_3 = 2308579491U;
long long int var_5 = -8689493191853507360LL;
unsigned int var_6 = 1325258535U;
long long int var_7 = -567331935918235703LL;
int zero = 0;
int var_12 = -1437784746;
unsigned short var_13 = (unsigned short)45182;
unsigned int var_14 = 4118309611U;
unsigned char var_15 = (unsigned char)41;
unsigned short var_16 = (unsigned short)35737;
int var_17 = -1351961661;
unsigned int arr_0 [16] [16] ;
unsigned int arr_2 [16] ;
long long int arr_6 [16] [16] ;
signed char arr_10 [15] ;
signed char arr_7 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1987944911U : 531927546U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 395402474U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -8281142662243592647LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-94 : (signed char)94;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
