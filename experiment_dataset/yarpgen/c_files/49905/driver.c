#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3543444092U;
unsigned long long int var_5 = 5862462483110206419ULL;
unsigned char var_6 = (unsigned char)140;
int var_7 = -603580928;
unsigned int var_16 = 4019162096U;
int zero = 0;
unsigned int var_18 = 2407307490U;
unsigned int var_19 = 3478079014U;
int var_20 = -1128362167;
int var_21 = 2103050848;
unsigned int var_22 = 1248518001U;
unsigned int var_23 = 2770599743U;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)102;
unsigned int arr_1 [20] ;
int arr_4 [11] ;
short arr_5 [11] [11] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1768409731U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1811465523;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)6112;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
