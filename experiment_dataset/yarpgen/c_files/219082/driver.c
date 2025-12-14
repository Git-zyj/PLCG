#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30195;
unsigned char var_7 = (unsigned char)253;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)217;
signed char var_12 = (signed char)-83;
long long int var_13 = -986801212147056709LL;
int zero = 0;
long long int var_18 = 435542807076534482LL;
unsigned int var_19 = 2732662492U;
unsigned short var_20 = (unsigned short)54773;
short var_21 = (short)22027;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 4230240901340765645LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
