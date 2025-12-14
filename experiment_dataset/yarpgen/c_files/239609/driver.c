#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
int var_1 = 118377023;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 690420752U;
unsigned int var_9 = 1598433770U;
int zero = 0;
unsigned int var_10 = 1754976641U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)2872;
short var_13 = (short)31561;
unsigned int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 322672762U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
