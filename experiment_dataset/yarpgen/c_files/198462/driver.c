#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 820496192;
unsigned short var_4 = (unsigned short)59984;
unsigned short var_8 = (unsigned short)11897;
unsigned long long int var_9 = 8721854075215610857ULL;
int zero = 0;
int var_11 = 1470250409;
unsigned short var_12 = (unsigned short)34295;
unsigned short var_13 = (unsigned short)2985;
long long int var_14 = 5729255087122650433LL;
_Bool var_15 = (_Bool)1;
unsigned char arr_0 [22] ;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
