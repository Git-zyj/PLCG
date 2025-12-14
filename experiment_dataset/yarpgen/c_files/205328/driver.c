#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1082331771U;
unsigned short var_9 = (unsigned short)49648;
long long int var_10 = -1898644806263552755LL;
unsigned int var_12 = 3787016909U;
long long int var_17 = 3718241966441903284LL;
int zero = 0;
short var_19 = (short)-19811;
short var_20 = (short)12782;
short var_21 = (short)28689;
unsigned short var_22 = (unsigned short)33980;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1587713669429014500ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 12014631335111772313ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
