#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
unsigned long long int var_3 = 7495748848246502588ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)241;
int var_8 = 527624211;
unsigned int var_9 = 1304503754U;
unsigned int var_11 = 2056279830U;
short var_13 = (short)30585;
unsigned char var_14 = (unsigned char)211;
int zero = 0;
unsigned char var_15 = (unsigned char)219;
unsigned short var_16 = (unsigned short)7062;
unsigned int var_17 = 425187131U;
unsigned int var_18 = 415754528U;
short var_19 = (short)-21068;
unsigned int arr_0 [16] ;
unsigned char arr_1 [16] ;
short arr_3 [16] [16] [16] ;
unsigned char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2740914655U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)27413;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
