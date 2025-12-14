#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6885839366808598127LL;
int var_8 = 1551764732;
signed char var_13 = (signed char)108;
short var_16 = (short)2439;
_Bool var_17 = (_Bool)0;
long long int var_18 = 258158233833271426LL;
int zero = 0;
short var_19 = (short)22890;
int var_20 = -349905320;
unsigned int var_21 = 2674459514U;
short var_22 = (short)-15255;
unsigned int var_23 = 153660514U;
int var_24 = 1519903786;
unsigned int var_25 = 3201527298U;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)32214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)20967;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-17418;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
