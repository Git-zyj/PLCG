#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47682;
unsigned short var_8 = (unsigned short)43028;
unsigned short var_9 = (unsigned short)21238;
unsigned short var_10 = (unsigned short)47173;
unsigned short var_11 = (unsigned short)57556;
unsigned short var_13 = (unsigned short)5010;
unsigned short var_16 = (unsigned short)61433;
unsigned short var_18 = (unsigned short)29974;
int zero = 0;
unsigned short var_19 = (unsigned short)462;
unsigned short var_20 = (unsigned short)49920;
unsigned short var_21 = (unsigned short)34363;
unsigned short var_22 = (unsigned short)16937;
unsigned short var_23 = (unsigned short)38371;
unsigned short var_24 = (unsigned short)44071;
unsigned short var_25 = (unsigned short)3915;
unsigned short var_26 = (unsigned short)55523;
unsigned short var_27 = (unsigned short)16220;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)38377;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)4242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54330 : (unsigned short)6419;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)13975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35144 : (unsigned short)45377;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
