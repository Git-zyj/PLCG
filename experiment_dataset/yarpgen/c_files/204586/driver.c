#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 397192832;
unsigned int var_1 = 1075440184U;
short var_2 = (short)-2345;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1940213458990589564ULL;
unsigned char var_7 = (unsigned char)227;
_Bool var_10 = (_Bool)1;
long long int var_12 = -8754977200779969620LL;
int zero = 0;
unsigned short var_14 = (unsigned short)24645;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)32;
short var_17 = (short)58;
unsigned int var_18 = 3290502304U;
int var_19 = 1618514841;
signed char arr_0 [16] ;
signed char arr_1 [16] ;
long long int arr_2 [16] ;
int arr_3 [16] [16] [16] ;
int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -2839412048335153791LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1354802251;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1698596390;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
