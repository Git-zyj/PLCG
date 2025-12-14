#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)102;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 15299333346001552147ULL;
unsigned long long int var_10 = 5541635533910826519ULL;
long long int var_13 = -5786009114565881824LL;
unsigned int var_14 = 721987167U;
int var_16 = 691471938;
signed char var_19 = (signed char)-111;
int zero = 0;
unsigned int var_20 = 3732776009U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)37;
int var_23 = -1116166806;
int var_24 = 377996450;
unsigned long long int var_25 = 14561233279678064597ULL;
unsigned long long int arr_0 [10] ;
signed char arr_1 [10] ;
long long int arr_2 [10] [10] [10] ;
signed char arr_3 [10] ;
int arr_6 [10] ;
short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6799353385681474970ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 6834241820900527215LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1162031224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)5650;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
