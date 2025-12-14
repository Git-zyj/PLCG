#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26694;
signed char var_5 = (signed char)24;
unsigned int var_10 = 2900914818U;
short var_11 = (short)32545;
long long int var_16 = 7559034046361996229LL;
signed char var_18 = (signed char)48;
int zero = 0;
signed char var_20 = (signed char)-25;
unsigned long long int var_21 = 11744754316497354050ULL;
long long int var_22 = -4893756142627148220LL;
unsigned char var_23 = (unsigned char)4;
signed char var_24 = (signed char)-98;
signed char arr_0 [23] [23] ;
signed char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-51;
}

void checksum() {
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
