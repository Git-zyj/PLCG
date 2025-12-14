#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6750;
unsigned short var_4 = (unsigned short)13305;
long long int var_5 = -3695579143760163687LL;
unsigned long long int var_6 = 9713612455196285637ULL;
int zero = 0;
short var_14 = (short)-2177;
long long int var_15 = 4290333942616959279LL;
short var_16 = (short)-19103;
int var_17 = -1850949390;
signed char var_18 = (signed char)-63;
unsigned int var_19 = 204433519U;
unsigned int var_20 = 2712349945U;
unsigned short var_21 = (unsigned short)41964;
unsigned short var_22 = (unsigned short)65270;
short arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-3569;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 706338159147466304ULL;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
