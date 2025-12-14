#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
short var_4 = (short)-2464;
unsigned short var_8 = (unsigned short)648;
unsigned long long int var_10 = 13318207142410892800ULL;
short var_11 = (short)4554;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1840120968888841845LL;
_Bool var_18 = (_Bool)1;
signed char arr_0 [16] [16] ;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
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
