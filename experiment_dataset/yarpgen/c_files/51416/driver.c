#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)14;
unsigned char var_4 = (unsigned char)240;
int var_5 = 1956949781;
unsigned short var_8 = (unsigned short)64611;
signed char var_9 = (signed char)-6;
signed char var_10 = (signed char)8;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3812122957U;
signed char var_17 = (signed char)57;
signed char var_18 = (signed char)113;
unsigned char arr_2 [11] ;
signed char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)106;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
