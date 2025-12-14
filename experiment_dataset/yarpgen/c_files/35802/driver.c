#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned short var_3 = (unsigned short)62773;
unsigned int var_4 = 3644958610U;
unsigned char var_5 = (unsigned char)14;
unsigned long long int var_6 = 6748444099584919273ULL;
signed char var_8 = (signed char)34;
short var_10 = (short)-6086;
_Bool var_11 = (_Bool)0;
short var_12 = (short)27952;
int zero = 0;
unsigned int var_13 = 1287082960U;
unsigned long long int var_14 = 12049656468330329228ULL;
unsigned short var_15 = (unsigned short)58494;
long long int var_16 = 3407554354343716000LL;
unsigned short arr_2 [16] ;
unsigned short arr_3 [16] ;
unsigned char arr_6 [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19881 : (unsigned short)30193;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20257 : (unsigned short)9968;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
