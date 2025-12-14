#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18386552332398209248ULL;
unsigned short var_1 = (unsigned short)54652;
short var_3 = (short)-8287;
unsigned char var_4 = (unsigned char)34;
unsigned char var_8 = (unsigned char)30;
short var_10 = (short)-26998;
unsigned char var_13 = (unsigned char)111;
unsigned char var_14 = (unsigned char)28;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
short var_18 = (short)3703;
unsigned char var_19 = (unsigned char)71;
unsigned char arr_0 [12] ;
short arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_3 [12] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)16584 : (short)-31566;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1168640244U : 2064700258U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-32478 : (short)-4031;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
