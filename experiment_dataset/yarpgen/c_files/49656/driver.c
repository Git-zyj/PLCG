#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
unsigned int var_1 = 4277018869U;
unsigned short var_2 = (unsigned short)4872;
unsigned int var_3 = 2161743423U;
unsigned int var_4 = 918463258U;
unsigned int var_5 = 532113465U;
int var_6 = 210329555;
unsigned long long int var_10 = 1979142923507549265ULL;
int zero = 0;
unsigned int var_11 = 865931916U;
unsigned int var_12 = 1841411257U;
short var_13 = (short)21157;
unsigned int var_14 = 440858941U;
unsigned int var_15 = 3785897308U;
signed char var_16 = (signed char)-15;
unsigned char var_17 = (unsigned char)35;
unsigned int var_18 = 1527530255U;
short var_19 = (short)11475;
unsigned int var_20 = 2582700807U;
short var_21 = (short)-9524;
short var_22 = (short)15946;
unsigned int var_23 = 2238340242U;
unsigned short var_24 = (unsigned short)37201;
unsigned long long int arr_1 [16] [16] ;
unsigned int arr_4 [23] ;
int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
int arr_9 [23] [23] [23] ;
unsigned short arr_10 [23] [23] [23] [23] ;
unsigned int arr_3 [16] [16] ;
short arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 17834456890828398895ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 119682863U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -427600676;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 6337783137905702050ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1005055392;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18851;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2739028218U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (short)-19044;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
