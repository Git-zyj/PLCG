#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42024;
int var_1 = 1924549204;
long long int var_2 = 1569927640012872310LL;
unsigned long long int var_3 = 614785969912721311ULL;
long long int var_4 = 7258019869831573760LL;
unsigned short var_5 = (unsigned short)34147;
int zero = 0;
int var_10 = 1542993635;
unsigned int var_11 = 2722744631U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)30;
int var_14 = 1093133259;
unsigned char var_15 = (unsigned char)91;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
int arr_2 [20] [20] ;
signed char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2521625037U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 807720994;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)90;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
