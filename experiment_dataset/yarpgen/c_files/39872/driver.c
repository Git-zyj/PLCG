#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27914;
unsigned long long int var_1 = 11363371137722584795ULL;
long long int var_2 = 4552113443468148519LL;
short var_3 = (short)-11915;
_Bool var_5 = (_Bool)0;
short var_7 = (short)27875;
unsigned char var_8 = (unsigned char)87;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
signed char var_10 = (signed char)116;
unsigned int var_11 = 287867863U;
unsigned int var_12 = 2342279095U;
unsigned char var_13 = (unsigned char)188;
unsigned long long int arr_1 [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 18351854268344593147ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2366623276U : 3226210660U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
