#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7764668018875914099LL;
signed char var_3 = (signed char)22;
long long int var_4 = 3611605908651255824LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)32173;
int var_8 = 1032182033;
unsigned char var_13 = (unsigned char)16;
int zero = 0;
long long int var_14 = 4343869586020036196LL;
unsigned char var_15 = (unsigned char)229;
unsigned short var_16 = (unsigned short)9861;
short var_17 = (short)11523;
unsigned int var_18 = 1181478058U;
unsigned int var_19 = 3033319359U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1781821519U;
_Bool arr_2 [18] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-26809;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
