#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9181007848560816040LL;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-52;
unsigned char var_4 = (unsigned char)222;
unsigned char var_6 = (unsigned char)205;
unsigned char var_7 = (unsigned char)14;
short var_8 = (short)-31064;
unsigned char var_11 = (unsigned char)55;
long long int var_12 = 981188464234483196LL;
short var_13 = (short)22072;
signed char var_14 = (signed char)-80;
long long int var_15 = 3043485779207913336LL;
long long int var_18 = -8873971581117412995LL;
int zero = 0;
long long int var_20 = -8911300555673711868LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 962837001U;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned short arr_3 [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)58074;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)214;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
