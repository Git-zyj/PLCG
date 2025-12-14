#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)201;
unsigned char var_6 = (unsigned char)122;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)29542;
int zero = 0;
unsigned int var_11 = 2669924803U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)29688;
short var_14 = (short)17877;
signed char var_15 = (signed char)93;
unsigned int arr_2 [11] ;
unsigned char arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2025743400U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
