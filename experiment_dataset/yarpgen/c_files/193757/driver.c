#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_8 = (unsigned char)26;
unsigned char var_10 = (unsigned char)136;
long long int var_11 = 649054364759668825LL;
unsigned short var_13 = (unsigned short)19786;
signed char var_14 = (signed char)117;
int zero = 0;
unsigned short var_15 = (unsigned short)12021;
short var_16 = (short)-24710;
unsigned long long int var_17 = 10866133213991003433ULL;
unsigned long long int var_18 = 8682691157519190696ULL;
long long int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -1314806472268247466LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
