#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)114;
int var_10 = -1830428734;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
unsigned short var_15 = (unsigned short)56967;
unsigned long long int var_16 = 10128049654142178030ULL;
unsigned char var_17 = (unsigned char)42;
unsigned int var_18 = 2451409622U;
unsigned long long int var_19 = 16475959045041486489ULL;
unsigned long long int var_20 = 8220548702473738286ULL;
unsigned short arr_0 [11] ;
unsigned char arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)9397;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)13;
}

void checksum() {
    hash(&seed, var_15);
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
