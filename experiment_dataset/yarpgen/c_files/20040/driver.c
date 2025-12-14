#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19695;
short var_4 = (short)2093;
unsigned int var_6 = 517653375U;
unsigned short var_13 = (unsigned short)63199;
int zero = 0;
unsigned short var_16 = (unsigned short)7017;
long long int var_17 = 1943855553654939369LL;
unsigned char var_18 = (unsigned char)198;
_Bool var_19 = (_Bool)0;
unsigned long long int arr_0 [23] ;
signed char arr_2 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 8871644358955147527ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)82 : (signed char)57;
}

void checksum() {
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
