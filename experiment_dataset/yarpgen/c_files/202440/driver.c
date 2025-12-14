#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7329812784494825756ULL;
unsigned char var_7 = (unsigned char)178;
int var_10 = -210687944;
int var_11 = 1792865431;
short var_12 = (short)28440;
int zero = 0;
unsigned int var_16 = 3790925111U;
signed char var_17 = (signed char)-7;
unsigned char var_18 = (unsigned char)227;
unsigned char var_19 = (unsigned char)84;
int var_20 = 1809887319;
int var_21 = -1598373197;
long long int arr_0 [12] [12] ;
signed char arr_1 [12] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -8105067939359143565LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2433918069U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
