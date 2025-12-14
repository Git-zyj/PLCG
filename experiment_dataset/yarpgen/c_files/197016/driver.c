#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3955973772U;
unsigned int var_5 = 2374675825U;
unsigned long long int var_10 = 4859988386683175728ULL;
signed char var_13 = (signed char)96;
int zero = 0;
unsigned int var_16 = 2586665156U;
unsigned char var_17 = (unsigned char)47;
_Bool var_18 = (_Bool)1;
signed char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)105;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
