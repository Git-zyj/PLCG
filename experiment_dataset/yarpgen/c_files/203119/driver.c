#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned long long int var_2 = 2676543259886856966ULL;
short var_4 = (short)1915;
unsigned char var_5 = (unsigned char)64;
short var_7 = (short)-10108;
unsigned int var_9 = 2438579807U;
int zero = 0;
unsigned short var_10 = (unsigned short)49414;
unsigned short var_11 = (unsigned short)36387;
unsigned int var_12 = 695399790U;
unsigned char var_13 = (unsigned char)247;
int var_14 = -524790573;
unsigned short var_15 = (unsigned short)33099;
short var_16 = (short)-6320;
short var_17 = (short)2615;
int var_18 = 1664024658;
unsigned long long int var_19 = 17818691652705434924ULL;
long long int var_20 = 2501522057881520473LL;
unsigned short var_21 = (unsigned short)39491;
unsigned long long int var_22 = 13874021143280577096ULL;
unsigned long long int arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned char arr_2 [15] ;
unsigned short arr_3 [15] [15] ;
unsigned long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 15220862534620854270ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)21104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 5635987082451254381ULL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
