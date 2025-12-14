#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2499806268U;
int var_3 = 552378706;
unsigned char var_4 = (unsigned char)232;
unsigned int var_13 = 2885708767U;
int zero = 0;
int var_17 = -1156460473;
short var_18 = (short)28411;
short var_19 = (short)-26992;
_Bool var_20 = (_Bool)0;
_Bool arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
