#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 5831727;
_Bool var_4 = (_Bool)1;
long long int var_5 = -8638574677069763401LL;
int var_6 = -1663330586;
int var_7 = -1663496969;
unsigned int var_9 = 4101446109U;
long long int var_10 = -5380828638835877621LL;
int var_11 = -1354308703;
unsigned int var_13 = 2401687474U;
signed char var_14 = (signed char)16;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
unsigned long long int var_16 = 18197393005119190156ULL;
unsigned long long int var_17 = 8033324294746716354ULL;
unsigned int arr_1 [12] [12] ;
unsigned int arr_3 [12] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 116041681U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 544516752U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-13377;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
