#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29233;
unsigned int var_1 = 1209730747U;
unsigned short var_2 = (unsigned short)23444;
unsigned short var_4 = (unsigned short)10884;
short var_5 = (short)3817;
unsigned short var_6 = (unsigned short)33818;
unsigned short var_7 = (unsigned short)43724;
unsigned short var_8 = (unsigned short)42854;
unsigned short var_9 = (unsigned short)46379;
int zero = 0;
short var_10 = (short)867;
short var_11 = (short)-30871;
unsigned short var_12 = (unsigned short)58581;
unsigned short var_13 = (unsigned short)46657;
unsigned short var_14 = (unsigned short)31030;
unsigned short var_15 = (unsigned short)43311;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] ;
short arr_6 [22] [22] ;
unsigned int arr_8 [22] [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)7002;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1804164829U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-8450 : (short)7219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1418251383U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 176093865U : 4117325393U;
}

void checksum() {
    hash(&seed, var_10);
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
