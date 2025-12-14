#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
unsigned char var_4 = (unsigned char)80;
long long int var_5 = 8469030111553268931LL;
long long int var_9 = -3248702309258298143LL;
unsigned short var_10 = (unsigned short)18426;
signed char var_12 = (signed char)112;
int zero = 0;
unsigned long long int var_13 = 4553854337148333893ULL;
int var_14 = -46642574;
short var_15 = (short)-20739;
unsigned short var_16 = (unsigned short)48743;
short var_17 = (short)2825;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-4078 : (short)3756;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
