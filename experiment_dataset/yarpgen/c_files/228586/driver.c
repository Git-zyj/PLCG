#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned long long int var_2 = 11811856510739614909ULL;
short var_5 = (short)8099;
unsigned int var_6 = 1603573029U;
short var_7 = (short)-17424;
unsigned char var_8 = (unsigned char)82;
int zero = 0;
signed char var_12 = (signed char)-89;
_Bool var_13 = (_Bool)0;
long long int var_14 = -4427495637401487406LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2376164264U;
unsigned long long int var_17 = 18038047056140121677ULL;
short arr_1 [15] [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)12080 : (short)-9796;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
