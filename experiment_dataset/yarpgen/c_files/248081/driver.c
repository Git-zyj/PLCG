#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1338605343905022341LL;
_Bool var_1 = (_Bool)1;
int var_4 = -1837675234;
signed char var_5 = (signed char)17;
short var_6 = (short)-31746;
short var_7 = (short)-4202;
unsigned long long int var_9 = 11824104602527429072ULL;
_Bool var_12 = (_Bool)1;
int var_16 = 1469411244;
int zero = 0;
unsigned int var_18 = 2763820471U;
_Bool var_19 = (_Bool)0;
int var_20 = 901897258;
unsigned long long int var_21 = 11960840634741960152ULL;
short var_22 = (short)21676;
_Bool var_23 = (_Bool)0;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
long long int arr_3 [16] ;
unsigned short arr_4 [16] [16] [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50335;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)55570;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8122744255451975500LL : 726397661851252106LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)11873 : (unsigned short)62960;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5115277425327742312ULL : 9735534953991879397ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2937809409444924521ULL : 7491255734535505725ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
