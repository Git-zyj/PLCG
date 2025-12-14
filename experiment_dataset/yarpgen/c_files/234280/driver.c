#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12335;
unsigned int var_2 = 2733611205U;
unsigned long long int var_5 = 8424139133585221333ULL;
short var_13 = (short)-4553;
short var_14 = (short)-16209;
signed char var_16 = (signed char)-55;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3948321536U;
unsigned long long int var_19 = 3588299809681098578ULL;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45167 : (unsigned short)7868;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
