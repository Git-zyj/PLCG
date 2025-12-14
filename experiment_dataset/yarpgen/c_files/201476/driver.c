#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1628724326696955412LL;
long long int var_4 = -8559869470765274751LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = 5581970843683304240LL;
unsigned char var_12 = (unsigned char)18;
unsigned short var_14 = (unsigned short)18968;
unsigned short var_17 = (unsigned short)64874;
int var_19 = 1179329884;
int zero = 0;
short var_20 = (short)-13429;
int var_21 = -1876173103;
unsigned char var_22 = (unsigned char)214;
unsigned int var_23 = 3907167552U;
_Bool var_24 = (_Bool)0;
signed char arr_0 [23] [23] ;
_Bool arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
