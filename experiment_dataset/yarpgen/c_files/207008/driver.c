#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62140;
short var_1 = (short)-12572;
short var_2 = (short)31223;
unsigned short var_4 = (unsigned short)62224;
unsigned char var_10 = (unsigned char)155;
unsigned int var_14 = 2557584009U;
int zero = 0;
unsigned long long int var_15 = 10945335342675127928ULL;
unsigned long long int var_16 = 11208413055187927913ULL;
unsigned char var_17 = (unsigned char)81;
short arr_0 [18] [18] ;
short arr_1 [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)7532 : (short)3391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)16831;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-17107 : (short)25868;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
