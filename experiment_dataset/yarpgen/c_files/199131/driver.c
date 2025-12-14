#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28901;
unsigned short var_2 = (unsigned short)52932;
unsigned char var_3 = (unsigned char)219;
int var_6 = -1804295050;
unsigned char var_8 = (unsigned char)247;
int zero = 0;
signed char var_13 = (signed char)63;
long long int var_14 = -1918049326156347571LL;
short var_15 = (short)12049;
unsigned long long int var_16 = 6858002377324817769ULL;
unsigned int var_17 = 1961069368U;
unsigned char arr_3 [24] ;
short arr_4 [24] ;
_Bool arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-12551;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
