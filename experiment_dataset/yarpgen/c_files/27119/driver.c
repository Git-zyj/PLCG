#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1266576513;
signed char var_5 = (signed char)-126;
int var_6 = -1497948099;
unsigned short var_8 = (unsigned short)38741;
unsigned short var_9 = (unsigned short)30990;
int zero = 0;
unsigned int var_10 = 514605462U;
unsigned char var_11 = (unsigned char)124;
long long int var_12 = -1971346677773714932LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1752102373201377827ULL;
unsigned int var_15 = 3407808539U;
unsigned int var_16 = 1344097057U;
int arr_2 [10] ;
_Bool arr_3 [10] ;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1443579069;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-13926;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
