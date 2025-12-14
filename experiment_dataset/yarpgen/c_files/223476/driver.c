#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
unsigned char var_10 = (unsigned char)123;
_Bool var_12 = (_Bool)0;
long long int var_15 = -4285891048848347443LL;
unsigned int var_16 = 3942045701U;
int zero = 0;
unsigned short var_18 = (unsigned short)20310;
int var_19 = 1012611545;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)54625;
unsigned long long int var_22 = 18205929492940047901ULL;
signed char var_23 = (signed char)-3;
unsigned short var_24 = (unsigned short)5473;
short var_25 = (short)-15895;
unsigned int var_26 = 674994368U;
unsigned long long int var_27 = 4249890953521040165ULL;
_Bool arr_0 [10] [10] ;
unsigned char arr_7 [16] [16] [16] ;
_Bool arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
