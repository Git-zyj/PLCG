#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13408;
short var_2 = (short)-4152;
short var_4 = (short)32486;
unsigned short var_5 = (unsigned short)35205;
long long int var_7 = 16108997637144169LL;
short var_11 = (short)-6289;
unsigned short var_12 = (unsigned short)6418;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
unsigned int var_14 = 3814932691U;
signed char var_15 = (signed char)-71;
long long int var_16 = -2645493461855686924LL;
short var_17 = (short)-22127;
unsigned int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 573356542U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1583108528U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6788435007962128960ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)18310;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
