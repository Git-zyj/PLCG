#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18124;
signed char var_3 = (signed char)-73;
unsigned int var_8 = 370376330U;
unsigned long long int var_9 = 14019753034489795792ULL;
long long int var_13 = -3577288101112460127LL;
unsigned char var_14 = (unsigned char)152;
long long int var_18 = 6513692416124548213LL;
int zero = 0;
long long int var_20 = 6220947212409348519LL;
long long int var_21 = 3958495557938001672LL;
short var_22 = (short)-608;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 15556612113317524300ULL;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-28990;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
