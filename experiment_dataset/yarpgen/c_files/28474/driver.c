#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-60;
long long int var_13 = -6946561016006100696LL;
unsigned long long int var_15 = 942831484931830106ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)2;
signed char var_21 = (signed char)43;
long long int var_22 = -4859131517897398740LL;
unsigned int var_23 = 712673785U;
short arr_2 [10] ;
unsigned int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)32369;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3499409188U : 869559588U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
