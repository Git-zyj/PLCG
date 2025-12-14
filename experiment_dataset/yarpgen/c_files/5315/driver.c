#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10376040801383400711ULL;
signed char var_2 = (signed char)72;
signed char var_5 = (signed char)-99;
signed char var_6 = (signed char)83;
signed char var_8 = (signed char)-39;
int var_9 = -2038643251;
long long int var_12 = 7909650924336137803LL;
unsigned long long int var_14 = 3315018642874104727ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = -1226988098;
unsigned long long int var_17 = 3489406987264168967ULL;
unsigned char var_18 = (unsigned char)94;
unsigned int var_19 = 329287766U;
unsigned long long int var_20 = 2187198787526827286ULL;
int arr_1 [13] ;
unsigned char arr_2 [13] [13] [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1543787727;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15840265170372356961ULL;
}

void checksum() {
    hash(&seed, var_16);
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
