#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7922;
int var_3 = -1679463109;
short var_4 = (short)944;
unsigned int var_6 = 3559386657U;
unsigned char var_11 = (unsigned char)128;
int zero = 0;
short var_16 = (short)20889;
unsigned char var_17 = (unsigned char)116;
int var_18 = -928687755;
short var_19 = (short)-12819;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)21;
unsigned int var_22 = 3127717040U;
unsigned char var_23 = (unsigned char)140;
short var_24 = (short)22649;
short arr_6 [13] ;
int arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-20626;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -1459955484;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
