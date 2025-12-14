#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -963581596798133273LL;
long long int var_6 = -3888334781210879529LL;
unsigned int var_8 = 862177326U;
unsigned short var_9 = (unsigned short)1896;
short var_12 = (short)-14874;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
unsigned long long int var_14 = 16960920073114760423ULL;
unsigned long long int var_15 = 2945396609343859523ULL;
int var_16 = -1191920806;
_Bool arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
