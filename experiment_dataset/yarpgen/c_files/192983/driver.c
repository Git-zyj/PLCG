#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6987867052441564863LL;
unsigned long long int var_2 = 11888464121808155630ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3986447498U;
unsigned char var_6 = (unsigned char)42;
unsigned long long int var_7 = 16536158566214647740ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39239;
unsigned char var_11 = (unsigned char)148;
unsigned int var_12 = 1854185454U;
unsigned int var_13 = 2359867520U;
unsigned char arr_5 [14] [14] ;
signed char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)127;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
