#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1242134307U;
long long int var_2 = 3685615637237035744LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15291451718729601710ULL;
_Bool var_7 = (_Bool)1;
short var_12 = (short)-21837;
unsigned short var_14 = (unsigned short)27047;
int zero = 0;
unsigned long long int var_15 = 17626357066696351576ULL;
unsigned int var_16 = 3277106147U;
unsigned long long int var_17 = 12125583214790455637ULL;
unsigned int var_18 = 1345877021U;
unsigned char arr_2 [16] [16] [16] ;
unsigned char arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)48 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)220;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
