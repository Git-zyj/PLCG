#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17605;
unsigned long long int var_5 = 4026761362739831982ULL;
unsigned long long int var_8 = 1949736155694832129ULL;
unsigned long long int var_10 = 1233965624148014482ULL;
unsigned char var_12 = (unsigned char)154;
unsigned int var_14 = 4049819027U;
signed char var_15 = (signed char)116;
unsigned long long int var_17 = 10909392897329780353ULL;
unsigned long long int var_18 = 3017765949762941725ULL;
signed char var_19 = (signed char)57;
int zero = 0;
unsigned long long int var_20 = 10661332961035668278ULL;
unsigned long long int var_21 = 2293173859378992254ULL;
unsigned char var_22 = (unsigned char)9;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)28620;
unsigned long long int var_25 = 1788457201147970927ULL;
short arr_1 [10] ;
unsigned char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)3817;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)173;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
