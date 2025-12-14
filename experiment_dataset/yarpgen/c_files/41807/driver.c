#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-365;
unsigned short var_6 = (unsigned short)54751;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)68;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16598091927422031019ULL;
unsigned long long int var_14 = 432945947364479390ULL;
unsigned short var_15 = (unsigned short)17503;
unsigned char arr_1 [10] ;
signed char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-22;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
