#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36812;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)26835;
int var_8 = 1668743169;
int var_10 = 2099674013;
int var_13 = 607864043;
unsigned short var_15 = (unsigned short)62779;
short var_16 = (short)-23650;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1432950959;
unsigned short var_19 = (unsigned short)5736;
short var_20 = (short)30619;
int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1949495241 : -649457025;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
