#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -47994233;
long long int var_3 = -5715460917746171319LL;
unsigned char var_6 = (unsigned char)120;
unsigned char var_13 = (unsigned char)81;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 3142944764U;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
unsigned int var_19 = 1001172727U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12602186210673206405ULL;
long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2070945345925426438LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 10556775675643180961ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
