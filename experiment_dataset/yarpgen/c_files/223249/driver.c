#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 655291927412666628LL;
unsigned int var_1 = 77082370U;
long long int var_6 = 4908812388027267564LL;
unsigned short var_11 = (unsigned short)35257;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-38;
unsigned char var_14 = (unsigned char)191;
int var_15 = -1649642826;
unsigned char var_16 = (unsigned char)233;
_Bool arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
