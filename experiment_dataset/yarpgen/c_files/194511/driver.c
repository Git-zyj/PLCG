#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -94528788;
short var_8 = (short)268;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3294087616U;
unsigned long long int var_19 = 4520199926695027430ULL;
unsigned char var_20 = (unsigned char)233;
unsigned char var_21 = (unsigned char)237;
unsigned char var_22 = (unsigned char)138;
unsigned char var_23 = (unsigned char)212;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)200;
long long int var_28 = 827903942031677102LL;
int var_29 = 2029646090;
unsigned int arr_5 [15] [15] ;
long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1613224294U : 1498183747U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 5636819116505940428LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
