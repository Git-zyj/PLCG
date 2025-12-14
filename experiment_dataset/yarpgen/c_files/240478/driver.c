#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 497532275;
unsigned short var_6 = (unsigned short)62897;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29893;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)233;
unsigned short var_13 = (unsigned short)39812;
int zero = 0;
unsigned short var_15 = (unsigned short)52560;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)15942;
unsigned short arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)48768;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
