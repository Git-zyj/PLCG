#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1810204612U;
long long int var_8 = 854257867818170736LL;
unsigned int var_9 = 1059764539U;
unsigned long long int var_12 = 6288560502714898674ULL;
unsigned int var_15 = 377960586U;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 2202043198698287361LL;
int var_18 = 719583604;
int var_19 = 1312780811;
unsigned long long int var_20 = 11446024499131980161ULL;
long long int arr_0 [23] [23] ;
unsigned long long int arr_2 [23] ;
int arr_4 [23] [23] [23] ;
unsigned char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -2274697894710981342LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 552875464517882767ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -772759117 : 1950943254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
