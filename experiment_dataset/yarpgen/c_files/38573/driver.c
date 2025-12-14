#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7425721279238540378LL;
long long int var_1 = -3422807288205129145LL;
short var_5 = (short)-15;
unsigned short var_7 = (unsigned short)57697;
long long int var_8 = -8511363704784238200LL;
long long int var_9 = -9044685457076635698LL;
long long int var_10 = -8336208552105554415LL;
int zero = 0;
short var_12 = (short)19999;
unsigned short var_13 = (unsigned short)62974;
signed char var_14 = (signed char)-55;
_Bool var_15 = (_Bool)0;
unsigned short arr_0 [16] ;
long long int arr_1 [16] ;
int arr_2 [16] [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)50672;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3229125809661127431LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 247554824;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -279502302;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
