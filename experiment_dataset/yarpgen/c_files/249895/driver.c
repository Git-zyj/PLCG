#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1218287622;
unsigned long long int var_2 = 12158659221662607353ULL;
unsigned char var_3 = (unsigned char)240;
unsigned long long int var_7 = 10866940573402315789ULL;
unsigned long long int var_10 = 1617529753688045876ULL;
short var_11 = (short)29644;
int zero = 0;
unsigned long long int var_12 = 11008836715964056325ULL;
long long int var_13 = -631832897435326092LL;
unsigned int var_14 = 362607958U;
unsigned char var_15 = (unsigned char)46;
int var_16 = 659758810;
unsigned char var_17 = (unsigned char)238;
long long int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -7285406469940614484LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 192807153U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -926514414;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
