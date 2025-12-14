#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9542;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 3929214037U;
unsigned char var_8 = (unsigned char)101;
short var_11 = (short)-24524;
int zero = 0;
short var_12 = (short)-21883;
unsigned char var_13 = (unsigned char)234;
unsigned int var_14 = 3244110778U;
unsigned char var_15 = (unsigned char)68;
unsigned char var_16 = (unsigned char)71;
unsigned char arr_0 [17] ;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)26251 : (short)-7302;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
