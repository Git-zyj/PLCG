#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -587017552;
unsigned int var_1 = 1663418600U;
unsigned char var_2 = (unsigned char)111;
_Bool var_3 = (_Bool)0;
short var_4 = (short)14566;
unsigned short var_7 = (unsigned short)47418;
long long int var_8 = 3967896380934435832LL;
int zero = 0;
unsigned short var_17 = (unsigned short)10269;
long long int var_18 = 1108711196986180688LL;
signed char var_19 = (signed char)46;
unsigned char var_20 = (unsigned char)132;
int var_21 = 1006547317;
int arr_0 [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1877054835;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 490310207;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
