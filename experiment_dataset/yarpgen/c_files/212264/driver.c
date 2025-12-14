#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55605;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-9923;
int zero = 0;
unsigned long long int var_15 = 3162901548057134441ULL;
unsigned long long int var_16 = 17806849132839804552ULL;
unsigned long long int var_17 = 898613082149330614ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 6144830798939859043ULL;
short arr_0 [15] ;
_Bool arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-7832;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
