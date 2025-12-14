#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1153191708;
long long int var_10 = 7599838960427285837LL;
int zero = 0;
unsigned long long int var_12 = 14302403223891880479ULL;
unsigned int var_13 = 2500220906U;
unsigned char var_14 = (unsigned char)239;
unsigned long long int var_15 = 1812478028112685458ULL;
unsigned long long int var_16 = 17840206046129926733ULL;
_Bool var_17 = (_Bool)0;
signed char arr_18 [25] [25] ;
unsigned short arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12479 : (unsigned short)60716;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
