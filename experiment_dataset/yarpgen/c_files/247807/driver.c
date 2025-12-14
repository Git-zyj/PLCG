#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)53;
short var_8 = (short)30776;
long long int var_10 = -5992631592832317505LL;
unsigned long long int var_11 = 7755440464710588832ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)243;
unsigned short var_14 = (unsigned short)38063;
unsigned char var_15 = (unsigned char)104;
int var_16 = 1373863789;
unsigned int var_17 = 4077220242U;
unsigned int var_18 = 3230128721U;
unsigned char var_19 = (unsigned char)216;
long long int var_20 = -1025898924069622931LL;
unsigned int arr_1 [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 3970008138U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)34;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
