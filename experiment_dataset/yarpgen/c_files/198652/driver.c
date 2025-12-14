#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2560356379U;
unsigned int var_2 = 638756798U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1700661072U;
int var_6 = 2110728477;
short var_8 = (short)-4598;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)13091;
int var_14 = -1136000164;
int zero = 0;
int var_15 = 698140859;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)33872;
signed char var_18 = (signed char)88;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)24;
unsigned char var_21 = (unsigned char)10;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1184460901250718588LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7026905603224200013ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
