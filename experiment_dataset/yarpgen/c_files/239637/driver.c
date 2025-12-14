#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)31574;
long long int var_12 = 9002444917836920138LL;
unsigned long long int var_13 = 955187812482657819ULL;
unsigned char var_14 = (unsigned char)216;
long long int var_15 = 745922875632738818LL;
int zero = 0;
unsigned char var_19 = (unsigned char)134;
unsigned short var_20 = (unsigned short)52513;
_Bool var_21 = (_Bool)1;
int var_22 = -574876159;
_Bool arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
