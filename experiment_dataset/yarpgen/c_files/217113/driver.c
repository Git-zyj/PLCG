#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31469;
unsigned short var_2 = (unsigned short)42876;
unsigned short var_3 = (unsigned short)6654;
unsigned short var_4 = (unsigned short)1563;
unsigned short var_5 = (unsigned short)62874;
unsigned short var_6 = (unsigned short)34278;
unsigned short var_7 = (unsigned short)14928;
unsigned short var_8 = (unsigned short)6005;
unsigned short var_9 = (unsigned short)56372;
unsigned short var_11 = (unsigned short)43726;
unsigned short var_12 = (unsigned short)4156;
unsigned short var_13 = (unsigned short)12400;
unsigned short var_14 = (unsigned short)47910;
unsigned short var_15 = (unsigned short)19605;
unsigned short var_16 = (unsigned short)10110;
unsigned short var_17 = (unsigned short)59761;
unsigned short var_18 = (unsigned short)54098;
int zero = 0;
unsigned short var_19 = (unsigned short)1170;
unsigned short var_20 = (unsigned short)24104;
unsigned short var_21 = (unsigned short)27711;
unsigned short var_22 = (unsigned short)11572;
unsigned short var_23 = (unsigned short)49475;
unsigned short var_24 = (unsigned short)46608;
unsigned short var_25 = (unsigned short)62663;
unsigned short var_26 = (unsigned short)20073;
unsigned short arr_2 [19] ;
unsigned short arr_7 [19] [19] [19] ;
unsigned short arr_10 [19] ;
unsigned short arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)5921;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)45032;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)30863;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)20636;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
