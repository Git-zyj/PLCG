#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15856747185007847758ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -551430812;
unsigned long long int var_4 = 14306864229380315457ULL;
signed char var_5 = (signed char)58;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)233;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10051098469342112370ULL;
int zero = 0;
int var_10 = 1286102269;
unsigned char var_11 = (unsigned char)227;
int var_12 = -1879261013;
short var_13 = (short)11915;
signed char var_14 = (signed char)106;
signed char var_15 = (signed char)-9;
unsigned long long int var_16 = 6815820672772244559ULL;
unsigned char var_17 = (unsigned char)214;
unsigned char var_18 = (unsigned char)106;
_Bool arr_4 [16] [16] ;
short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)-716;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
