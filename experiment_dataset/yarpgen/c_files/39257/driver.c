#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-14771;
unsigned long long int var_4 = 3099029174165230741ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)83;
unsigned short var_10 = (unsigned short)20360;
int var_13 = 1158720694;
int zero = 0;
short var_16 = (short)-12637;
unsigned int var_17 = 2677985811U;
short var_18 = (short)23450;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)92;
short var_21 = (short)3531;
unsigned long long int var_22 = 7099980765054517634ULL;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)206;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
