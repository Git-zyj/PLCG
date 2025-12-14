#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4227932361120615584LL;
unsigned int var_2 = 3689223493U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11965747083701717366ULL;
unsigned char var_7 = (unsigned char)198;
int var_9 = 1597101591;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11982065750942169537ULL;
unsigned short arr_1 [22] [22] ;
short arr_2 [22] ;
signed char arr_4 [22] [22] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)64154;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-1515;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-25404;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
