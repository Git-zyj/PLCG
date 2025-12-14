#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
int var_2 = 1401671096;
int var_5 = 1032787923;
unsigned char var_6 = (unsigned char)101;
unsigned long long int var_10 = 16869010806784806875ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)133;
unsigned char var_14 = (unsigned char)86;
unsigned char var_15 = (unsigned char)101;
short var_16 = (short)25878;
int var_17 = 210803837;
unsigned char var_18 = (unsigned char)58;
unsigned char var_19 = (unsigned char)44;
int var_20 = 370096274;
short arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)1832 : (short)-3415;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
