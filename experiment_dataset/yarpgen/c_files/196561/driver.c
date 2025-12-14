#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4058285246U;
int var_4 = 1555363669;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-14859;
short var_13 = (short)-18298;
int zero = 0;
unsigned short var_16 = (unsigned short)24172;
long long int var_17 = 1722944181777357207LL;
int var_18 = 1201351559;
unsigned int var_19 = 2860084645U;
unsigned short var_20 = (unsigned short)63521;
unsigned long long int arr_2 [25] ;
short arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 9121703154927782966ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-31436;
}

void checksum() {
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
