#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31660;
unsigned int var_5 = 472811248U;
unsigned int var_9 = 219003612U;
unsigned int var_14 = 2051790305U;
unsigned int var_15 = 457182741U;
unsigned short var_16 = (unsigned short)17419;
unsigned short var_17 = (unsigned short)55329;
int zero = 0;
unsigned int var_20 = 634502880U;
unsigned short var_21 = (unsigned short)58285;
unsigned short var_22 = (unsigned short)43873;
unsigned int var_23 = 1093184943U;
unsigned int var_24 = 927135257U;
unsigned short arr_0 [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)31239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13429 : (unsigned short)46749;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
