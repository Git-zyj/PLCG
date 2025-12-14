#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -5633299576468951980LL;
int var_9 = -46204899;
short var_10 = (short)31246;
short var_13 = (short)-15674;
unsigned short var_14 = (unsigned short)4989;
short var_16 = (short)14555;
short var_18 = (short)1546;
int zero = 0;
unsigned long long int var_19 = 16149345455743922262ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 225906491U;
signed char var_22 = (signed char)24;
unsigned long long int var_23 = 1818115713587689185ULL;
signed char var_24 = (signed char)-63;
short arr_0 [17] ;
unsigned short arr_1 [17] ;
signed char arr_2 [21] ;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)22487;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)53681;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-125;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
