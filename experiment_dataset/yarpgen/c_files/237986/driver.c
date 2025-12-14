#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1143429166;
unsigned short var_3 = (unsigned short)28255;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)17;
unsigned long long int var_9 = 15648265187403814238ULL;
unsigned char var_10 = (unsigned char)26;
unsigned short var_11 = (unsigned short)61684;
int zero = 0;
unsigned short var_12 = (unsigned short)23212;
unsigned short var_13 = (unsigned short)21038;
unsigned short var_14 = (unsigned short)35010;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
