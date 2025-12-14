#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 6305929777609256873ULL;
unsigned int var_9 = 921147434U;
signed char var_10 = (signed char)94;
int zero = 0;
short var_13 = (short)-9675;
short var_14 = (short)20685;
short var_15 = (short)7085;
_Bool var_16 = (_Bool)1;
short var_17 = (short)9693;
unsigned int var_18 = 604916154U;
unsigned long long int arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 12732199394815213415ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)45255;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
