#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)63;
long long int var_3 = -943578832239846066LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)2;
short var_8 = (short)-2551;
short var_9 = (short)-10354;
unsigned int var_11 = 582223455U;
int zero = 0;
unsigned char var_13 = (unsigned char)41;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)46;
unsigned char var_16 = (unsigned char)121;
signed char var_17 = (signed char)-11;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-40 : (signed char)-93;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
