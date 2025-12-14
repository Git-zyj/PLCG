#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2144306618U;
unsigned long long int var_2 = 2151688972384741216ULL;
unsigned short var_3 = (unsigned short)18959;
short var_6 = (short)-2928;
unsigned long long int var_7 = 5705686463021354891ULL;
unsigned char var_9 = (unsigned char)11;
_Bool var_10 = (_Bool)0;
int var_11 = -1909257645;
int zero = 0;
unsigned char var_12 = (unsigned char)75;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)17682;
unsigned char var_15 = (unsigned char)63;
short arr_2 [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)17152 : (short)19779;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)108;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
