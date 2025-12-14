#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1077175621;
unsigned int var_4 = 1182442583U;
int var_6 = 1072349186;
unsigned short var_8 = (unsigned short)5607;
int var_9 = 466167329;
unsigned int var_12 = 611835329U;
unsigned short var_13 = (unsigned short)8386;
unsigned short var_14 = (unsigned short)49473;
unsigned short var_15 = (unsigned short)17444;
int zero = 0;
int var_16 = 456987279;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3764287680U;
signed char var_19 = (signed char)114;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)99;
unsigned long long int var_22 = 12081752987622806315ULL;
signed char var_23 = (signed char)12;
unsigned short var_24 = (unsigned short)54941;
unsigned short arr_0 [15] [15] ;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)44609;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -4680161114856989319LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
