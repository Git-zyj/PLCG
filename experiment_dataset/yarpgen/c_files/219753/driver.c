#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 479608162U;
unsigned char var_4 = (unsigned char)136;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7596325528316854677LL;
short var_8 = (short)2748;
short var_9 = (short)31895;
long long int var_12 = 6369758497237288110LL;
int zero = 0;
unsigned char var_14 = (unsigned char)239;
unsigned short var_15 = (unsigned short)32284;
signed char var_16 = (signed char)-89;
int arr_0 [18] ;
long long int arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 871197356;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 3999239905245878094LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)255;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
