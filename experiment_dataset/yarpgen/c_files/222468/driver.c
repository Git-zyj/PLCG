#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2588377523U;
long long int var_8 = -8953696139408048673LL;
unsigned int var_11 = 181237062U;
unsigned char var_12 = (unsigned char)73;
unsigned short var_17 = (unsigned short)50532;
long long int var_18 = -6157630024547688448LL;
int zero = 0;
unsigned int var_20 = 554530474U;
unsigned short var_21 = (unsigned short)44557;
unsigned int var_22 = 1621822520U;
unsigned int var_23 = 58676879U;
unsigned char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)28;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
