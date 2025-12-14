#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1986338574827121123LL;
short var_7 = (short)18925;
unsigned short var_8 = (unsigned short)32783;
long long int var_11 = -3571333412386286984LL;
unsigned short var_17 = (unsigned short)23424;
int zero = 0;
long long int var_20 = 993428093837670224LL;
unsigned char var_21 = (unsigned char)12;
unsigned char var_22 = (unsigned char)252;
int var_23 = -113213185;
short arr_0 [19] ;
short arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)15846;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)22391;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)45454;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
