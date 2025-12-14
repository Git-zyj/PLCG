#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7755011729259733516LL;
unsigned char var_3 = (unsigned char)204;
unsigned int var_6 = 2898681321U;
unsigned long long int var_11 = 6271637978610439898ULL;
unsigned long long int var_12 = 6198888827474314048ULL;
unsigned int var_14 = 532941837U;
long long int var_15 = -891548331955609132LL;
int zero = 0;
int var_19 = 1078635899;
signed char var_20 = (signed char)44;
unsigned long long int var_21 = 8114616584073379132ULL;
unsigned short var_22 = (unsigned short)4146;
unsigned int var_23 = 3704130046U;
int var_24 = 1889397629;
unsigned char var_25 = (unsigned char)113;
int var_26 = 284241406;
long long int var_27 = -313964363172035260LL;
signed char var_28 = (signed char)-8;
int arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
int arr_2 [20] ;
unsigned long long int arr_3 [11] [11] ;
unsigned long long int arr_4 [11] ;
unsigned int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 240664101 : 419780278;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2632961456U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1411163288 : -378391402;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2639477582092822456ULL : 8387095034658011203ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6094945251036903667ULL : 7027494912605533813ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2075002315U : 734502468U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
