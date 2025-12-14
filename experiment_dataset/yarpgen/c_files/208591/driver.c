#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)-22534;
unsigned long long int var_6 = 9077126437093034701ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)52830;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)105;
int zero = 0;
unsigned char var_20 = (unsigned char)47;
unsigned int var_21 = 3224900156U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 594418092U;
unsigned long long int var_24 = 9010173652278054775ULL;
signed char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)105;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
