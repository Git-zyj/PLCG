#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)34504;
long long int var_5 = -4231014128594349048LL;
unsigned short var_9 = (unsigned short)6764;
long long int var_14 = 6421609737651189640LL;
unsigned short var_15 = (unsigned short)40257;
unsigned short var_17 = (unsigned short)12087;
int zero = 0;
unsigned short var_19 = (unsigned short)36355;
long long int var_20 = -1475928260826548607LL;
unsigned short var_21 = (unsigned short)35615;
unsigned short arr_3 [15] ;
unsigned short arr_4 [15] [15] [15] ;
unsigned short arr_5 [15] ;
unsigned short arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)54710;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)4339;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)31759;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)6013;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
