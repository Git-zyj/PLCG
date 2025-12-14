#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43021;
_Bool var_1 = (_Bool)1;
int var_5 = 1889725941;
unsigned char var_6 = (unsigned char)101;
unsigned char var_7 = (unsigned char)199;
unsigned short var_11 = (unsigned short)1262;
int zero = 0;
unsigned short var_16 = (unsigned short)27492;
int var_17 = 1572055480;
int var_18 = 1836981359;
unsigned long long int var_19 = 13243466410423334001ULL;
unsigned short var_20 = (unsigned short)58445;
unsigned int arr_3 [25] [25] ;
short arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 118557309U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12115;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
