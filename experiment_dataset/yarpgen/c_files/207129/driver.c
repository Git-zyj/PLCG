#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_7 = 1545020412;
unsigned char var_9 = (unsigned char)10;
int var_10 = 542496324;
unsigned char var_13 = (unsigned char)116;
unsigned short var_14 = (unsigned short)62121;
short var_15 = (short)-8525;
unsigned char var_16 = (unsigned char)188;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-113;
long long int var_19 = -7869517400783965637LL;
int var_20 = -1932833589;
unsigned char var_21 = (unsigned char)41;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)131;
unsigned char var_24 = (unsigned char)58;
unsigned short var_25 = (unsigned short)22548;
short arr_3 [19] [19] ;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)7628;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
