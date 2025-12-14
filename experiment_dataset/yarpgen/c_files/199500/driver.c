#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 195318262;
unsigned int var_4 = 3825182305U;
short var_5 = (short)5025;
short var_6 = (short)-5601;
int var_8 = 692226455;
signed char var_9 = (signed char)117;
signed char var_10 = (signed char)-35;
long long int var_11 = 3783409971586633229LL;
long long int var_12 = -3827264007511018046LL;
long long int var_14 = -5991125633474730227LL;
int zero = 0;
unsigned int var_15 = 1040395875U;
signed char var_16 = (signed char)-18;
unsigned short var_17 = (unsigned short)54310;
long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
_Bool arr_2 [10] [10] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3787012233514384530LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)62950;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 977214038;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
