#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -139124081;
unsigned short var_3 = (unsigned short)13733;
unsigned int var_6 = 3453992759U;
unsigned short var_7 = (unsigned short)23371;
long long int var_8 = -8131239030620352089LL;
int var_10 = -2018986338;
unsigned short var_11 = (unsigned short)35172;
unsigned int var_12 = 42504316U;
unsigned int var_13 = 543701561U;
signed char var_14 = (signed char)80;
unsigned int var_15 = 596567951U;
int zero = 0;
unsigned int var_16 = 62287702U;
long long int var_17 = -5615142063240687017LL;
long long int var_18 = -4091150353109785370LL;
unsigned int var_19 = 519627806U;
unsigned int var_20 = 393105948U;
unsigned int arr_0 [19] ;
_Bool arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3718589181U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
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
