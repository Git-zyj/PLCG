#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -619213068;
short var_2 = (short)19341;
long long int var_5 = -6424558122530053855LL;
long long int var_7 = 7892250663837223739LL;
int var_9 = 1925436021;
unsigned long long int var_11 = 7425115996401728592ULL;
unsigned long long int var_13 = 16089007752765241855ULL;
int zero = 0;
long long int var_15 = -3295673501509613724LL;
long long int var_16 = -5477873057295055266LL;
short var_17 = (short)24260;
int var_18 = 1259489173;
unsigned char var_19 = (unsigned char)64;
unsigned char var_20 = (unsigned char)186;
unsigned int var_21 = 2342091168U;
short var_22 = (short)-24253;
unsigned int arr_0 [13] ;
int arr_2 [16] [16] ;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1757484132U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 460630810;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
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
