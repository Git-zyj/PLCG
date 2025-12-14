#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4611494756566814834LL;
long long int var_2 = 738577984615751377LL;
short var_3 = (short)-15947;
unsigned char var_4 = (unsigned char)33;
unsigned char var_5 = (unsigned char)209;
unsigned char var_7 = (unsigned char)19;
unsigned long long int var_8 = 9915698527018657577ULL;
unsigned int var_9 = 1014820802U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31464;
short var_14 = (short)18546;
unsigned int var_15 = 4011926277U;
unsigned long long int var_16 = 13185069575037330819ULL;
unsigned long long int var_17 = 2424513933206135801ULL;
int zero = 0;
long long int var_18 = -9100589386067859375LL;
unsigned short var_19 = (unsigned short)54439;
unsigned long long int var_20 = 1980930332926909212ULL;
short var_21 = (short)4500;
unsigned int var_22 = 1990383509U;
unsigned int var_23 = 729631374U;
signed char var_24 = (signed char)17;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7318844U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
