#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-24525;
signed char var_4 = (signed char)36;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-25914;
unsigned char var_9 = (unsigned char)90;
int var_10 = -1269230724;
int zero = 0;
long long int var_11 = -1516148833451671587LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-9541;
short var_14 = (short)22558;
signed char var_15 = (signed char)-102;
_Bool arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
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
