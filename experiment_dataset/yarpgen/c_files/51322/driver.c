#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22083;
unsigned short var_2 = (unsigned short)34687;
short var_4 = (short)-18223;
short var_5 = (short)-937;
unsigned short var_8 = (unsigned short)37453;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)50235;
unsigned short var_14 = (unsigned short)60223;
unsigned int var_15 = 3593017077U;
short var_16 = (short)23512;
int zero = 0;
short var_17 = (short)32093;
short var_18 = (short)-13803;
unsigned short var_19 = (unsigned short)30788;
short var_20 = (short)-24056;
long long int var_21 = 734607702103253273LL;
int var_22 = 67751468;
long long int var_23 = 9085193583500275260LL;
long long int var_24 = -2577021275139476566LL;
_Bool var_25 = (_Bool)1;
unsigned short arr_1 [19] [19] ;
long long int arr_7 [19] ;
unsigned short arr_9 [19] [19] ;
_Bool arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)51629;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3941082117852196671LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)34622;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
