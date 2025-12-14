#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2759;
unsigned short var_1 = (unsigned short)40917;
unsigned int var_4 = 4133294315U;
unsigned short var_5 = (unsigned short)61937;
unsigned short var_6 = (unsigned short)3061;
short var_8 = (short)18572;
unsigned long long int var_11 = 15574284976059618794ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)105;
signed char var_15 = (signed char)(-127 - 1);
unsigned int var_16 = 2061464434U;
_Bool var_17 = (_Bool)1;
unsigned int arr_3 [23] [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1601535543U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)27327;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
