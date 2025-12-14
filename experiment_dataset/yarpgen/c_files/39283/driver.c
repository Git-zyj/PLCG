#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18382116694954868978ULL;
unsigned int var_2 = 651710646U;
unsigned int var_3 = 2064598237U;
short var_5 = (short)-23182;
unsigned char var_7 = (unsigned char)59;
unsigned short var_8 = (unsigned short)36913;
short var_9 = (short)2109;
unsigned int var_11 = 1660563342U;
unsigned short var_12 = (unsigned short)28474;
signed char var_13 = (signed char)100;
int zero = 0;
unsigned long long int var_14 = 17955106864586645525ULL;
short var_15 = (short)19434;
unsigned short var_16 = (unsigned short)17073;
unsigned char var_17 = (unsigned char)19;
int var_18 = -263770332;
unsigned int arr_1 [20] ;
unsigned char arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3310418074U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)121 : (unsigned char)244;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
