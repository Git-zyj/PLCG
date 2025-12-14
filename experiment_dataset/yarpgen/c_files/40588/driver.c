#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65181;
unsigned short var_5 = (unsigned short)36565;
unsigned short var_7 = (unsigned short)54275;
unsigned short var_9 = (unsigned short)63053;
int zero = 0;
unsigned short var_11 = (unsigned short)10636;
unsigned short var_12 = (unsigned short)34736;
unsigned short var_13 = (unsigned short)9623;
unsigned short var_14 = (unsigned short)51873;
unsigned short var_15 = (unsigned short)15263;
unsigned short var_16 = (unsigned short)30532;
unsigned short var_17 = (unsigned short)55701;
unsigned short var_18 = (unsigned short)12053;
unsigned short var_19 = (unsigned short)13080;
unsigned short var_20 = (unsigned short)10729;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)9236;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)10812;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)50197;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
