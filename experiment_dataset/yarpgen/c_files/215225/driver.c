#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10728;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-115;
unsigned short var_5 = (unsigned short)48327;
short var_6 = (short)-11445;
short var_7 = (short)-25390;
unsigned char var_8 = (unsigned char)135;
short var_9 = (short)2340;
int zero = 0;
unsigned short var_12 = (unsigned short)25137;
int var_13 = -936917296;
unsigned int var_14 = 3199930650U;
unsigned int var_15 = 2574733248U;
unsigned int var_16 = 3066196557U;
int var_17 = 1801319155;
unsigned int arr_0 [14] [14] ;
short arr_3 [14] [14] ;
short arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 404096734U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)28023;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-14988;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
