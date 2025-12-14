#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17781;
unsigned long long int var_1 = 1294254940144022559ULL;
unsigned short var_2 = (unsigned short)43752;
int var_3 = 1884566119;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)50;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 382300988U;
int zero = 0;
long long int var_11 = 3730923400117755648LL;
long long int var_12 = -4425677777916080624LL;
unsigned short var_13 = (unsigned short)58826;
unsigned short var_14 = (unsigned short)26951;
unsigned int var_15 = 428405591U;
_Bool var_16 = (_Bool)0;
long long int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
_Bool arr_3 [10] [10] ;
unsigned int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3804293641376521067LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)28408;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 714985086U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
