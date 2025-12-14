#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5342265594276107585LL;
unsigned char var_4 = (unsigned char)23;
signed char var_5 = (signed char)-30;
unsigned short var_6 = (unsigned short)18860;
unsigned short var_11 = (unsigned short)27962;
unsigned int var_15 = 3463354446U;
unsigned short var_16 = (unsigned short)27460;
int zero = 0;
signed char var_17 = (signed char)-120;
signed char var_18 = (signed char)-80;
short var_19 = (short)-8877;
long long int var_20 = 9025017921708608244LL;
signed char var_21 = (signed char)-68;
unsigned short arr_0 [23] ;
signed char arr_1 [23] [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)52512;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -9212069110785094474LL;
}

void checksum() {
    hash(&seed, var_17);
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
