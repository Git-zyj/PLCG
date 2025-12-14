#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 169429183U;
signed char var_1 = (signed char)25;
unsigned short var_3 = (unsigned short)38636;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-29750;
signed char var_8 = (signed char)110;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_13 = -1687099892;
long long int var_14 = 1479536094778489143LL;
signed char var_15 = (signed char)-98;
unsigned int var_16 = 4036815773U;
short arr_0 [11] ;
unsigned short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-20552;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)18145;
}

void checksum() {
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
