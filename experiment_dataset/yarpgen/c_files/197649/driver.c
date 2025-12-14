#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 258790436;
short var_7 = (short)12714;
int var_12 = -1869671456;
short var_14 = (short)-18664;
unsigned int var_15 = 1100947759U;
int zero = 0;
unsigned int var_20 = 2584411152U;
signed char var_21 = (signed char)118;
_Bool var_22 = (_Bool)1;
short var_23 = (short)13866;
unsigned short var_24 = (unsigned short)36490;
unsigned short var_25 = (unsigned short)63451;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)100;
unsigned char var_29 = (unsigned char)100;
unsigned char arr_0 [17] ;
_Bool arr_3 [17] ;
int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1442459257 : -1711223427;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
