#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19083;
unsigned short var_2 = (unsigned short)36946;
signed char var_3 = (signed char)75;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-7178;
long long int var_14 = 9145677714467096151LL;
short var_15 = (short)-9108;
int zero = 0;
unsigned long long int var_16 = 7912696239329220436ULL;
unsigned short var_17 = (unsigned short)27552;
unsigned long long int var_18 = 791763556375268210ULL;
unsigned long long int var_19 = 3304071587244482353ULL;
unsigned short var_20 = (unsigned short)46994;
int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -585616365 : 2019253990;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
