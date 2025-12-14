#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3003830296419533628ULL;
unsigned short var_1 = (unsigned short)47089;
long long int var_3 = -9022675286196935917LL;
signed char var_4 = (signed char)115;
int var_10 = 389670265;
unsigned short var_16 = (unsigned short)32138;
int zero = 0;
unsigned long long int var_17 = 10341860187589257648ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)143;
unsigned int var_21 = 3578667962U;
short arr_2 [16] [16] ;
signed char arr_3 [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)13922;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3723492407U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
