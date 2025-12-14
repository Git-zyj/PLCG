#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned short var_2 = (unsigned short)49895;
unsigned long long int var_3 = 16013069600342378061ULL;
long long int var_4 = -5542208572674272787LL;
short var_6 = (short)-25259;
unsigned short var_9 = (unsigned short)55548;
unsigned short var_10 = (unsigned short)65018;
unsigned int var_12 = 4234945777U;
int zero = 0;
unsigned int var_14 = 2633143577U;
unsigned char var_15 = (unsigned char)130;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)51356;
signed char var_18 = (signed char)-42;
long long int var_19 = 802115363349638821LL;
unsigned short var_20 = (unsigned short)40446;
signed char var_21 = (signed char)-31;
signed char arr_2 [18] [18] [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3909509608U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
