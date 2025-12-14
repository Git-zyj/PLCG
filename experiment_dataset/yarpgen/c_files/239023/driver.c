#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13016590304381412154ULL;
short var_1 = (short)-14395;
short var_2 = (short)-18084;
unsigned int var_5 = 924872343U;
short var_7 = (short)-3948;
long long int var_8 = 6407419291378559012LL;
unsigned int var_10 = 2253632314U;
unsigned long long int var_12 = 673924451992582747ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)19251;
int var_16 = 1268486079;
short var_17 = (short)22308;
unsigned long long int arr_0 [22] ;
_Bool arr_1 [22] [22] ;
short arr_2 [22] ;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8322698557219833892ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)15967 : (short)16186;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
