#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned int var_10 = 3970005236U;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)134;
int var_17 = 1886047005;
int zero = 0;
unsigned short var_18 = (unsigned short)60130;
unsigned long long int var_19 = 3633047109485308126ULL;
unsigned int var_20 = 4211641327U;
unsigned char var_21 = (unsigned char)85;
int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -669087076 : 1899993783;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
