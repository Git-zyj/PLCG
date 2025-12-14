#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 780448987;
int var_8 = -1360776177;
short var_11 = (short)-22290;
unsigned short var_17 = (unsigned short)64403;
int zero = 0;
unsigned char var_18 = (unsigned char)136;
int var_19 = -301733852;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)7;
_Bool arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
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
