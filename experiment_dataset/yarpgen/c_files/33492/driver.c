#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1264427518U;
unsigned int var_3 = 479051714U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)99;
signed char var_6 = (signed char)60;
unsigned short var_7 = (unsigned short)27272;
unsigned short var_9 = (unsigned short)34037;
int zero = 0;
unsigned long long int var_12 = 12803461753327543265ULL;
int var_13 = -938099101;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)20;
signed char var_16 = (signed char)21;
unsigned int arr_0 [12] ;
short arr_1 [12] ;
signed char arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1759150608U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)29882;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-121 : (signed char)-43;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
