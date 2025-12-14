#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = -1520925506;
int zero = 0;
unsigned int var_15 = 2028850192U;
unsigned short var_16 = (unsigned short)47649;
unsigned long long int var_17 = 6927930414595323745ULL;
_Bool var_18 = (_Bool)0;
int var_19 = 256459722;
int var_20 = -542097736;
unsigned short arr_1 [15] ;
unsigned int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14899 : (unsigned short)36122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1185781630U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
