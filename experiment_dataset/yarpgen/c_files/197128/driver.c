#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26313;
unsigned long long int var_5 = 12749479869380407118ULL;
unsigned long long int var_6 = 2897035407728541595ULL;
unsigned short var_7 = (unsigned short)47066;
unsigned long long int var_8 = 10304422398084351641ULL;
short var_10 = (short)19275;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7079006805273152386ULL;
long long int var_13 = -8664815276196296146LL;
long long int var_14 = -3844390371872511141LL;
unsigned long long int var_15 = 16466269761839117072ULL;
unsigned int var_16 = 1953707752U;
unsigned char var_17 = (unsigned char)54;
_Bool arr_0 [13] ;
short arr_1 [13] [13] ;
unsigned short arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)27153;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)45830;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
