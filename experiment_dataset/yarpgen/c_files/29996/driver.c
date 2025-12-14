#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5568351748506562246ULL;
signed char var_3 = (signed char)-97;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)64;
int var_6 = -1001711610;
int var_8 = 475336747;
unsigned int var_15 = 2670646828U;
int zero = 0;
short var_16 = (short)-6110;
_Bool var_17 = (_Bool)1;
int var_18 = 1856043275;
signed char var_19 = (signed char)58;
short var_20 = (short)988;
signed char arr_2 [12] ;
signed char arr_3 [12] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-5591;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
