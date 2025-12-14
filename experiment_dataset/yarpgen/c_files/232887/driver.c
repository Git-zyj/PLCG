#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -61811421;
long long int var_5 = 2904055848896765699LL;
int var_7 = -513941425;
int var_8 = -2022849751;
long long int var_9 = 2271319103718667699LL;
long long int var_12 = 2358490334563605346LL;
signed char var_16 = (signed char)-113;
int zero = 0;
long long int var_17 = 9103428932145502109LL;
unsigned char var_18 = (unsigned char)98;
unsigned char var_19 = (unsigned char)91;
unsigned char var_20 = (unsigned char)136;
long long int var_21 = 3488280498984193793LL;
unsigned char arr_0 [15] ;
long long int arr_1 [15] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1526357462867184057LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)5;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
