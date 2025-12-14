#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned short var_2 = (unsigned short)14186;
unsigned char var_3 = (unsigned char)212;
signed char var_4 = (signed char)-80;
_Bool var_5 = (_Bool)1;
long long int var_6 = -4508550169586557972LL;
unsigned int var_7 = 2255304753U;
unsigned short var_8 = (unsigned short)18454;
long long int var_9 = 861178074895450550LL;
unsigned short var_10 = (unsigned short)236;
unsigned char var_12 = (unsigned char)75;
unsigned int var_13 = 779310121U;
int var_15 = -1626141520;
short var_16 = (short)-9227;
int zero = 0;
long long int var_17 = 251688640170899752LL;
unsigned long long int var_18 = 125635732820533283ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 348716129;
unsigned int var_21 = 473112146U;
unsigned char var_22 = (unsigned char)200;
unsigned short var_23 = (unsigned short)61763;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_2 [10] [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned short arr_11 [10] [10] ;
unsigned char arr_15 [10] [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11640726337384613746ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 9382150162507019979ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)30465;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned char)188 : (unsigned char)7;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
