#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6644841475578343360ULL;
unsigned long long int var_2 = 4429902931707407099ULL;
unsigned long long int var_4 = 1364465498086077515ULL;
unsigned long long int var_7 = 9743229992476083123ULL;
unsigned long long int var_8 = 15812196592295852328ULL;
unsigned long long int var_12 = 2090479608872863856ULL;
unsigned long long int var_13 = 3123266535606230114ULL;
unsigned long long int var_14 = 12196943073533041662ULL;
short var_15 = (short)24122;
int zero = 0;
unsigned long long int var_17 = 18205665089456544403ULL;
unsigned long long int var_18 = 12491043804143120544ULL;
unsigned long long int var_19 = 4421378610050113355ULL;
unsigned long long int var_20 = 13595086353432181975ULL;
unsigned long long int arr_0 [20] ;
short arr_4 [20] ;
short arr_5 [20] [20] [20] [20] ;
short arr_8 [20] [20] [20] ;
unsigned long long int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 6255496021342105887ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)22800;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-11878;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 12935271799808903204ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
