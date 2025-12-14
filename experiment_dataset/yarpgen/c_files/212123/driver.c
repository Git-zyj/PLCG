#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14981526409905999714ULL;
int var_4 = -1574170795;
signed char var_5 = (signed char)12;
unsigned char var_7 = (unsigned char)94;
signed char var_8 = (signed char)49;
short var_10 = (short)1454;
unsigned char var_14 = (unsigned char)13;
unsigned short var_16 = (unsigned short)7975;
int zero = 0;
long long int var_17 = -1087008816693686384LL;
unsigned long long int var_18 = 13106979679767848401ULL;
unsigned long long int var_19 = 12868734945228148695ULL;
unsigned long long int var_20 = 17507289353650152302ULL;
long long int var_21 = 6390080108003731428LL;
unsigned long long int var_22 = 17958306608913910176ULL;
unsigned short var_23 = (unsigned short)29704;
unsigned int var_24 = 1021639864U;
unsigned short arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)58704;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
