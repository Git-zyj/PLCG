#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_7 = -710016314;
unsigned char var_10 = (unsigned char)189;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
signed char var_14 = (signed char)-82;
signed char var_15 = (signed char)33;
unsigned long long int var_16 = 2094836124055832216ULL;
short var_17 = (short)4637;
short var_18 = (short)-18678;
long long int arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -8077024565180384409LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
